#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NPCBodySize.h"
#include "unitysdk/System/Object.h"
class KFJIPJHCHJA;
class KOJLADIPNKE;
class LAJCPEFEOPN;
namespace RPG::GameCore { class LevelPedestrianV2ExtendFreeStyle; }
namespace RPG::GameCore { class LevelPedestrianV2MemberExtendFreeStyle; }
namespace RPG::GameCore { class LevelPedestrianV2MemberExtendFreeStyleConfig; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KOJLADIPNKE_CPBJPMELDLA_CBJCJBMGBOL_OFFSET UNITYSDK_OFFSET(0xB59B1E0)
#define KOJLADIPNKE_CPBJPMELDLA_CTOR_OFFSET UNITYSDK_OFFSET(0xB5998C0)
#define KOJLADIPNKE_CPBJPMELDLA_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB59A6B0)
#define KOJLADIPNKE_CPBJPMELDLA_MIFJNPKACOB_OFFSET UNITYSDK_OFFSET(0xB59A9E0)
#define KOJLADIPNKE_CPBJPMELDLA_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0xB59AB80)

inline static constexpr unsigned int KOJLADIPNKE_CPBJPMELDLA_TypeDefinitionIndex = 69279;

	class KOJLADIPNKE_CPBJPMELDLA : public ::System::Object
	{
	public:
		::RPG::GameCore::LevelPedestrianV2MemberExtendFreeStyleConfig* EABKOHGCHFP; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* LHDBMGGLFCA; // 0x18
		::System::Collections::Generic::HashSet_1<::System::String*>* LADEEJFDJOH; // 0x20
		::System::Collections::Generic::HashSet_1<::System::String*>* EDHDDJKIFDO; // 0x28
		::System::Collections::Generic::HashSet_1<::System::String*>* BIDLPGEABJL; // 0x30
		::System::Collections::Generic::List_1<::System::String*>* EHLGLBENHEJ; // 0x38
		::System::Collections::Generic::HashSet_1<::System::String*>* GBHBBLONPCN; // 0x40
		::RPG::GameCore::NPCBodySize FNCMBFHKKCK; // 0x48
		::System::Void _ctor(::KOJLADIPNKE* a1, ::RPG::GameCore::LevelPedestrianV2ExtendFreeStyle* a2)
		{
			return ((::System::Void(*)(::PVOID, ::KOJLADIPNKE*, ::RPG::GameCore::LevelPedestrianV2ExtendFreeStyle*))((::PBYTE)hIl2Cpp + KOJLADIPNKE_CPBJPMELDLA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOJLADIPNKE_CPBJPMELDLA_DISPOSE_OFFSET))(this);
		}

		::System::Void PKADDEPKJFN(::KFJIPJHCHJA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFJIPJHCHJA*))((::PBYTE)hIl2Cpp + KOJLADIPNKE_CPBJPMELDLA_PKADDEPKJFN_OFFSET))(this, a1);
		}

		::System::String* CBJCJBMGBOL(::RPG::GameCore::LevelPedestrianV2MemberExtendFreeStyle* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::GameCore::LevelPedestrianV2MemberExtendFreeStyle*))((::PBYTE)hIl2Cpp + KOJLADIPNKE_CPBJPMELDLA_CBJCJBMGBOL_OFFSET))(this, a1);
		}

		::System::Boolean MIFJNPKACOB(::LAJCPEFEOPN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LAJCPEFEOPN*))((::PBYTE)hIl2Cpp + KOJLADIPNKE_CPBJPMELDLA_MIFJNPKACOB_OFFSET))(this, a1);
		}

	};
