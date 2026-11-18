#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NGFJKDJDJAC.h"

class LOICBEJNBOB;
namespace System { template <typename T> class Action_1; }

#define DIFNLBKDLJN_FEFLGILNABE_OFFSET UNITYSDK_OFFSET(0x12085DE0)
#define DIFNLBKDLJN_HFCOKPBMGGA_OFFSET UNITYSDK_OFFSET(0x12086040)
#define DIFNLBKDLJN_KELBGAKDHHM_OFFSET UNITYSDK_OFFSET(0x12085F60)
#define DIFNLBKDLJN__CTOR_OFFSET UNITYSDK_OFFSET(0x12085DD0)

inline static constexpr unsigned int DIFNLBKDLJN_TypeDefinitionIndex = 67593;

class DIFNLBKDLJN : public ::NGFJKDJDJAC
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIFNLBKDLJN__CTOR_OFFSET))(this);
	}

	::System::Void FEFLGILNABE(::System::Int32 OBNIAHNMHPF, ::System::Action_1<::LOICBEJNBOB*>* GJBHEJGENMI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::LOICBEJNBOB*>*))((::PBYTE)hIl2Cpp + DIFNLBKDLJN_FEFLGILNABE_OFFSET))(this, OBNIAHNMHPF, GJBHEJGENMI);
	}

	::System::Void KELBGAKDHHM(::System::Int32 OBNIAHNMHPF, ::System::Action_1<::LOICBEJNBOB*>* GJBHEJGENMI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::LOICBEJNBOB*>*))((::PBYTE)hIl2Cpp + DIFNLBKDLJN_KELBGAKDHHM_OFFSET))(this, OBNIAHNMHPF, GJBHEJGENMI);
	}

	::System::Void HFCOKPBMGGA(::System::Int32 OBNIAHNMHPF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DIFNLBKDLJN_HFCOKPBMGGA_OFFSET))(this, OBNIAHNMHPF);
	}
};
