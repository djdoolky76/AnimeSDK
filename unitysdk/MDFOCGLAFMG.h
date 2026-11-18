#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGELKBLKFHE.h"

class HGAJKHIMKJP;
class OLHKONLFDKH;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MDFOCGLAFMG_AFJHIJBPHOL_OFFSET UNITYSDK_OFFSET(0x16C776C0)
#define MDFOCGLAFMG_CNIKAMOAANF_OFFSET UNITYSDK_OFFSET(0x16C77800)
#define MDFOCGLAFMG_DOPGAFCKMNF_OFFSET UNITYSDK_OFFSET(0x16C775E0)
#define MDFOCGLAFMG_FPLOCAOMGEB_OFFSET UNITYSDK_OFFSET(0x16C77890)
#define MDFOCGLAFMG_HLDBBGIKCAM_OFFSET UNITYSDK_OFFSET(0x16C77670)
#define MDFOCGLAFMG_IAPAHPJABGL_OFFSET UNITYSDK_OFFSET(0x16C77A60)
#define MDFOCGLAFMG_ONSHUTDOWN_OFFSET UNITYSDK_OFFSET(0x16C77510)
#define MDFOCGLAFMG_ONSTART_OFFSET UNITYSDK_OFFSET(0x16C774D0)
#define MDFOCGLAFMG__CTOR_OFFSET UNITYSDK_OFFSET(0x16C77550)

inline static constexpr unsigned int MDFOCGLAFMG_TypeDefinitionIndex = 74100;

class MDFOCGLAFMG : public ::JGELKBLKFHE
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::OLHKONLFDKH*>*>* PMLILBLOCLI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDFOCGLAFMG__CTOR_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDFOCGLAFMG_ONSTART_OFFSET))(this);
	}

	::System::Void OnShutDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDFOCGLAFMG_ONSHUTDOWN_OFFSET))(this);
	}

	::System::Void DOPGAFCKMNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDFOCGLAFMG_DOPGAFCKMNF_OFFSET))(this);
	}

	::System::Boolean HLDBBGIKCAM(::HGAJKHIMKJP* IPMMCGDMODG)
	{
		return ((::System::Boolean(*)(::PVOID, ::HGAJKHIMKJP*))((::PBYTE)hIl2Cpp + MDFOCGLAFMG_HLDBBGIKCAM_OFFSET))(this, IPMMCGDMODG);
	}

	::System::Void AFJHIJBPHOL(::System::Int32 MCOHLHMKLIP, ::OLHKONLFDKH* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::OLHKONLFDKH*))((::PBYTE)hIl2Cpp + MDFOCGLAFMG_AFJHIJBPHOL_OFFSET))(this, MCOHLHMKLIP, LJBPECKCCEA);
	}

	::System::Void CNIKAMOAANF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDFOCGLAFMG_CNIKAMOAANF_OFFSET))(this);
	}

	::System::Void FPLOCAOMGEB(::System::Int32 MCOHLHMKLIP, ::OLHKONLFDKH* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::OLHKONLFDKH*))((::PBYTE)hIl2Cpp + MDFOCGLAFMG_FPLOCAOMGEB_OFFSET))(this, MCOHLHMKLIP, LJBPECKCCEA);
	}

	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::OLHKONLFDKH*>*>* IAPAHPJABGL()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::OLHKONLFDKH*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDFOCGLAFMG_IAPAHPJABGL_OFFSET))(this);
	}
};
