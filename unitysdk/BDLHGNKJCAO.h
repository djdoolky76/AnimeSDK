#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDLHGNKJCAO;
namespace RPG::GameCore { class IRIFBXLodSizeConfig; }
namespace RPG::GameCore { class StageAutoGenConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define BDLHGNKJCAO_CTOR_OFFSET UNITYSDK_OFFSET(0x162FE170)
#define BDLHGNKJCAO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x162FE1F0)
#define BDLHGNKJCAO_GGBLHEHJBDO_OFFSET UNITYSDK_OFFSET(0x162FE090)
#define BDLHGNKJCAO_GINEJPKCMAN_OFFSET UNITYSDK_OFFSET(0x162FE290)
#define BDLHGNKJCAO_JEAMMEEKNKE_OFFSET UNITYSDK_OFFSET(0x162FE3B0)

inline static constexpr unsigned int BDLHGNKJCAO_TypeDefinitionIndex = 69504;

	class BDLHGNKJCAO : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::IRIFBXLodSizeConfig*>* JKEENOKCDGJ; // 0x10
		static ::BDLHGNKJCAO** StaticGet_EMLNOINPICJ()
		{
			return (::BDLHGNKJCAO**)UnitySDK::FromName("", "BDLHGNKJCAO")->GetStaticField(0x6DB30);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDLHGNKJCAO_CTOR_OFFSET))(this);
		}

		static ::BDLHGNKJCAO* GGBLHEHJBDO()
		{
			return ((::BDLHGNKJCAO*(*)())((::PBYTE)hIl2Cpp + BDLHGNKJCAO_GGBLHEHJBDO_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDLHGNKJCAO_DISPOSE_OFFSET))(this);
		}

		::System::Void GINEJPKCMAN(::RPG::GameCore::StageAutoGenConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageAutoGenConfig*))((::PBYTE)hIl2Cpp + BDLHGNKJCAO_GINEJPKCMAN_OFFSET))(this, a1);
		}

		::RPG::GameCore::IRIFBXLodSizeConfig* JEAMMEEKNKE(::System::String* a1)
		{
			return ((::RPG::GameCore::IRIFBXLodSizeConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BDLHGNKJCAO_JEAMMEEKNKE_OFFSET))(this, a1);
		}

	};
