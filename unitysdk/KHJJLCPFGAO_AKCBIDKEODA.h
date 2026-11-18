#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KHJJLCPFGAO_AKCBIDKEODA_ADLDPKBDCJA_OFFSET UNITYSDK_OFFSET(0x15B8CF20)
#define KHJJLCPFGAO_AKCBIDKEODA_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x15B8CCF0)
#define KHJJLCPFGAO_AKCBIDKEODA_EHEMAKJEODN_OFFSET UNITYSDK_OFFSET(0x15B8CC60)
#define KHJJLCPFGAO_AKCBIDKEODA_GHHFNOGCMBI_OFFSET UNITYSDK_OFFSET(0x15B8CCB0)
#define KHJJLCPFGAO_AKCBIDKEODA_JLGJNPKDPBD_OFFSET UNITYSDK_OFFSET(0x15B8CF70)
#define KHJJLCPFGAO_AKCBIDKEODA__CTOR_OFFSET UNITYSDK_OFFSET(0x15B8CA70)

inline static constexpr unsigned int KHJJLCPFGAO_AKCBIDKEODA_TypeDefinitionIndex = 45327;

class KHJJLCPFGAO_AKCBIDKEODA : public ::System::Object
{
public:
	::System::Action* PLGLKDMLBLE; // 0x10
	::System::Collections::Generic::List_1<::System::Object*>* APCMKPFEPKO; // 0x18
	::System::Boolean GLPLMNGENKI; // 0x20

	::System::Void _ctor(::System::Collections::Generic::List_1<::System::Object*>* MILOFJODDOK, ::System::Action* GOHDPILNKMO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Object*>*, ::System::Action*))((::PBYTE)hIl2Cpp + KHJJLCPFGAO_AKCBIDKEODA__CTOR_OFFSET))(this, MILOFJODDOK, GOHDPILNKMO);
	}

	::System::Void EHEMAKJEODN(::System::EventArgs* KOIBHLHLMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + KHJJLCPFGAO_AKCBIDKEODA_EHEMAKJEODN_OFFSET))(this, KOIBHLHLMFC);
	}

	::System::Void GHHFNOGCMBI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHJJLCPFGAO_AKCBIDKEODA_GHHFNOGCMBI_OFFSET))(this);
	}

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHJJLCPFGAO_AKCBIDKEODA_BJANDJKKNCD_OFFSET))(this);
	}

	::System::Void ADLDPKBDCJA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHJJLCPFGAO_AKCBIDKEODA_ADLDPKBDCJA_OFFSET))(this);
	}

	::System::Void JLGJNPKDPBD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHJJLCPFGAO_AKCBIDKEODA_JLGJNPKDPBD_OFFSET))(this);
	}
};
