#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class CreateCharacter; }
namespace RPG::GameCore { class LevelNPCStillConfig; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define DAPFANDHPAA_AMAEDFNFKFB_OFFSET UNITYSDK_OFFSET(0xDFC8250)
#define DAPFANDHPAA_CCPNJPDPADI_OFFSET UNITYSDK_OFFSET(0xDFC8290)
#define DAPFANDHPAA_EPJHPIKIAID_OFFSET UNITYSDK_OFFSET(0xDFC7E40)
#define DAPFANDHPAA_FECOFCHEHBM_OFFSET UNITYSDK_OFFSET(0xDFC81B0)
#define DAPFANDHPAA_HCFINLKPIHL_OFFSET UNITYSDK_OFFSET(0xDFC7DA0)
#define DAPFANDHPAA_HICHAIMJJNP_OFFSET UNITYSDK_OFFSET(0xDFC8020)
#define DAPFANDHPAA_LIGOGGEEMKL_OFFSET UNITYSDK_OFFSET(0xDFC80D0)
#define DAPFANDHPAA_MHHGHBJFKON_OFFSET UNITYSDK_OFFSET(0xDFC8320)

inline static constexpr unsigned int DAPFANDHPAA_TypeDefinitionIndex = 48367;

	class DAPFANDHPAA : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::String*, ::System::String*>** StaticGet_EDAKBOIFLJF()
		{
			return (::System::Func_2<::System::String*, ::System::String*>**)UnitySDK::FromName("", "DAPFANDHPAA")->GetStaticField(0x5C550);
		}

		// static const ::System::String* EEDECBCIAAH; // 0x0
		static ::RPG::GameCore::LevelNPCStillConfig* HCFINLKPIHL()
		{
			return ((::RPG::GameCore::LevelNPCStillConfig*(*)())((::PBYTE)hIl2Cpp + DAPFANDHPAA_HCFINLKPIHL_OFFSET))();
		}

		static ::System::String* EPJHPIKIAID(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + DAPFANDHPAA_EPJHPIKIAID_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::String*>* HICHAIMJJNP(::System::String* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + DAPFANDHPAA_HICHAIMJJNP_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::String*>* LIGOGGEEMKL(::System::String* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + DAPFANDHPAA_LIGOGGEEMKL_OFFSET))(a1);
		}

		static ::System::String* FECOFCHEHBM(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + DAPFANDHPAA_FECOFCHEHBM_OFFSET))(a1);
		}

		static ::System::String* CCPNJPDPADI(::System::String* a1)
		{
			return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + DAPFANDHPAA_CCPNJPDPADI_OFFSET))(a1);
		}

		static ::RPG::GameCore::CreateCharacter* AMAEDFNFKFB(::System::String* a1)
		{
			return ((::RPG::GameCore::CreateCharacter*(*)(::System::String*))((::PBYTE)hIl2Cpp + DAPFANDHPAA_AMAEDFNFKFB_OFFSET))(a1);
		}

		static ::System::Boolean MHHGHBJFKON(::System::String* a1)
		{
			return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + DAPFANDHPAA_MHHGHBJFKON_OFFSET))(a1);
		}

	};
