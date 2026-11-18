#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class JGLNLIMIHCA;
class MACDMBOEGJO;
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FNGOPHAFNAC_BGIIDOALLGB_OFFSET UNITYSDK_OFFSET(0x11D89F10)
#define FNGOPHAFNAC_CABFIEEAHBE_OFFSET UNITYSDK_OFFSET(0x11D8A4E0)
#define FNGOPHAFNAC_CLMJOFIDANF_OFFSET UNITYSDK_OFFSET(0x11D89DB0)
#define FNGOPHAFNAC_IEBPEIBAEMM_OFFSET UNITYSDK_OFFSET(0x11D8A1D0)
#define FNGOPHAFNAC_JDFFBPJACJL_OFFSET UNITYSDK_OFFSET(0x11D8A2A0)
#define FNGOPHAFNAC_KEOFHLMHFLB_OFFSET UNITYSDK_OFFSET(0x11D8A490)
#define FNGOPHAFNAC_PPBDOEBANDE_OFFSET UNITYSDK_OFFSET(0x11D8A040)
#define FNGOPHAFNAC__CTOR_OFFSET UNITYSDK_OFFSET(0x11D89DA0)

inline static constexpr unsigned int FNGOPHAFNAC_TypeDefinitionIndex = 81869;

class FNGOPHAFNAC : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::JGLNLIMIHCA*>* AIMLDCCDPJB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNGOPHAFNAC__CTOR_OFFSET))(this);
	}

	::System::Void CLMJOFIDANF(::System::Boolean KILKGKBKHID)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FNGOPHAFNAC_CLMJOFIDANF_OFFSET))(this, KILKGKBKHID);
	}

	::System::Void BGIIDOALLGB(::System::Int32 HPEMFJDOAKL, ::System::Boolean KILKGKBKHID)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + FNGOPHAFNAC_BGIIDOALLGB_OFFSET))(this, HPEMFJDOAKL, KILKGKBKHID);
	}

	::System::Void PPBDOEBANDE(::System::Func_2<::System::Int32, ::System::Boolean>* HCDKBLNCBFM, ::System::Boolean KILKGKBKHID)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::Int32, ::System::Boolean>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FNGOPHAFNAC_PPBDOEBANDE_OFFSET))(this, HCDKBLNCBFM, KILKGKBKHID);
	}

	::System::Void IEBPEIBAEMM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNGOPHAFNAC_IEBPEIBAEMM_OFFSET))(this);
	}

	::System::Void JDFFBPJACJL(::System::Int32 HPEMFJDOAKL, ::System::Collections::Generic::List_1<::MACDMBOEGJO*>* FKDMBPECLJL, ::System::Boolean KILKGKBKHID)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::MACDMBOEGJO*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FNGOPHAFNAC_JDFFBPJACJL_OFFSET))(this, HPEMFJDOAKL, FKDMBPECLJL, KILKGKBKHID);
	}

	::System::Void KEOFHLMHFLB(::System::Collections::Generic::List_1<::MACDMBOEGJO*>* FKDMBPECLJL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MACDMBOEGJO*>*))((::PBYTE)hIl2Cpp + FNGOPHAFNAC_KEOFHLMHFLB_OFFSET))(this, FKDMBPECLJL);
	}

	::System::Void CABFIEEAHBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNGOPHAFNAC_CABFIEEAHBE_OFFSET))(this);
	}
};
