#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigScaleCameraZ; }
namespace MoleMole::Config { class ConfigScaleCameraZPattern; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DHDENPAGNCL_BJHHNNGACFN_OFFSET UNITYSDK_OFFSET(0x1489EF40)
#define DHDENPAGNCL_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x1489EAE0)
#define DHDENPAGNCL_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x1489ED90)
#define DHDENPAGNCL_LFDCKMJHCGP_OFFSET UNITYSDK_OFFSET(0x1489EB70)
#define DHDENPAGNCL_NPAHAPEAPPP_OFFSET UNITYSDK_OFFSET(0x1489F220)
#define DHDENPAGNCL_PDLHOEIJANK_OFFSET UNITYSDK_OFFSET(0x1489F550)
#define DHDENPAGNCL__CCTOR_OFFSET UNITYSDK_OFFSET(0x1489EA40)

inline static constexpr unsigned int DHDENPAGNCL_TypeDefinitionIndex = 74547;

class DHDENPAGNCL : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigScaleCameraZPattern*>** StaticGet_PBGPACKOLNC()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigScaleCameraZPattern*>**)Il2CppClass::FromTypeDefinitionIndex(DHDENPAGNCL_TypeDefinitionIndex)->GetStaticField(0x3A920);
	}
	static ::MoleMole::Config::ConfigScaleCameraZ** StaticGet_MPALMHKAOCA()
	{
		return (::MoleMole::Config::ConfigScaleCameraZ**)Il2CppClass::FromTypeDefinitionIndex(DHDENPAGNCL_TypeDefinitionIndex)->GetStaticField(0x3A928);
	}
	static ::System::Boolean* StaticGet_JDOIEFMLBLH()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(DHDENPAGNCL_TypeDefinitionIndex)->GetStaticField(0xD800);
	}
	static ::System::Single* StaticGet_PKOBGPEFNKM()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(DHDENPAGNCL_TypeDefinitionIndex)->GetStaticField(0xD804);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DHDENPAGNCL__CCTOR_OFFSET))();
	}

	static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + DHDENPAGNCL_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void LFDCKMJHCGP(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + DHDENPAGNCL_LFDCKMJHCGP_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + DHDENPAGNCL_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::System::Boolean BJHHNNGACFN()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + DHDENPAGNCL_BJHHNNGACFN_OFFSET))();
	}

	static ::System::Void NPAHAPEAPPP()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DHDENPAGNCL_NPAHAPEAPPP_OFFSET))();
	}

	static ::System::Boolean PDLHOEIJANK(::System::Int32 BKCJBPPJCEL, ::MoleMole::Config::ConfigScaleCameraZPattern*& DJCNCELJPOM, ::System::Boolean JENMPJJHNHE)
	{
		return ((::System::Boolean(*)(::System::Int32, ::MoleMole::Config::ConfigScaleCameraZPattern*&, ::System::Boolean))((::PBYTE)hIl2Cpp + DHDENPAGNCL_PDLHOEIJANK_OFFSET))(BKCJBPPJCEL, DJCNCELJPOM, JENMPJJHNHE);
	}
};
