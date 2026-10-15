#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LICGOGNGGID.h"
#include "unitysdk/System/Object.h"
class KOBGMGHMCLF;
namespace RPG::Client { class TeamBuild; }
namespace RPG::Client { class TeamBuildRecipe; }
namespace RPG::Client { class TeamBuildUnit; }
namespace RPG::GameCore { class TeamBuildConfigRow; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define RPG_CLIENT_TEAMBUILDRECIPE_CHECKCOLLETIONSCONTAINNUMBER_OFFSET UNITYSDK_OFFSET(0xE1CB4B0)
#define RPG_CLIENT_TEAMBUILDRECIPE_CREATEBUILD_OFFSET UNITYSDK_OFFSET(0xE1CAF40)
#define RPG_CLIENT_TEAMBUILDRECIPE_CREATE_1_OFFSET UNITYSDK_OFFSET(0xE1C8F80)
#define RPG_CLIENT_TEAMBUILDRECIPE_CREATE_OFFSET UNITYSDK_OFFSET(0xE1C8500)
#define RPG_CLIENT_TEAMBUILDRECIPE_CTOR_OFFSET UNITYSDK_OFFSET(0xE1CAF30)
#define RPG_CLIENT_TEAMBUILDRECIPE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xE1CB370)
#define RPG_CLIENT_TEAMBUILDRECIPE_EQUALS_OFFSET UNITYSDK_OFFSET(0xE1CB300)
#define RPG_CLIENT_TEAMBUILDRECIPE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xE1CB460)
#define RPG_CLIENT_TEAMBUILDRECIPE_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xE1CA050)
#define RPG_CLIENT_TEAMBUILDRECIPE_GET_TARGETAVATARID_OFFSET UNITYSDK_OFFSET(0xE1C9740)
#define RPG_CLIENT_TEAMBUILDRECIPE_GET_TARGETAVATARPOSITION_OFFSET UNITYSDK_OFFSET(0xE1CA060)
#define RPG_CLIENT_TEAMBUILDRECIPE_GET_TEAMMATES_OFFSET UNITYSDK_OFFSET(0xE1CA070)
#define RPG_CLIENT_TEAMBUILDRECIPE__GETALTERNATIVEAVATARIDS_OFFSET UNITYSDK_OFFSET(0xE1CA990)
#define RPG_CLIENT_TEAMBUILDRECIPE__TRYCONVERTAVATARID_OFFSET UNITYSDK_OFFSET(0xE1CA080)

namespace RPG::Client
{
	inline static constexpr unsigned int TeamBuildRecipe_TypeDefinitionIndex = 68093;

	class TeamBuildRecipe : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::Client::TeamBuildUnit*>* _Teammates_k__BackingField; // 0x10
		::LICGOGNGGID _Identifier_k__BackingField; // 0x18
		::System::UInt32 _TargetAvatarPosition_k__BackingField; // 0x20
		// static const ::System::Object _UnitCount; // 0x0
		::System::Void _ctor(::LICGOGNGGID a1, ::System::UInt32 a2, ::Il2CppArray<::RPG::Client::TeamBuildUnit*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::LICGOGNGGID, ::System::UInt32, ::Il2CppArray<::RPG::Client::TeamBuildUnit*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDRECIPE_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::LICGOGNGGID get_Identifier()
		{
			return ((::LICGOGNGGID(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDRECIPE_GET_IDENTIFIER_OFFSET))(this);
		}

		::System::UInt32 get_TargetAvatarID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDRECIPE_GET_TARGETAVATARID_OFFSET))(this);
		}

		::System::UInt32 get_TargetAvatarPosition()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDRECIPE_GET_TARGETAVATARPOSITION_OFFSET))(this);
		}

		::Il2CppArray<::RPG::Client::TeamBuildUnit*>* get_Teammates()
		{
			return ((::Il2CppArray<::RPG::Client::TeamBuildUnit*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDRECIPE_GET_TEAMMATES_OFFSET))(this);
		}

		static ::RPG::Client::TeamBuildRecipe* Create(::RPG::GameCore::TeamBuildConfigRow* a1, ::System::Collections::Generic::ICollection_1<::System::UInt32>* a2)
		{
			return ((::RPG::Client::TeamBuildRecipe*(*)(::RPG::GameCore::TeamBuildConfigRow*, ::System::Collections::Generic::ICollection_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDRECIPE_CREATE_OFFSET))(a1, a2);
		}

		static ::RPG::Client::TeamBuildRecipe* Create_1(::KOBGMGHMCLF* a1, ::System::Collections::Generic::ICollection_1<::System::UInt32>* a2)
		{
			return ((::RPG::Client::TeamBuildRecipe*(*)(::KOBGMGHMCLF*, ::System::Collections::Generic::ICollection_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDRECIPE_CREATE_1_OFFSET))(a1, a2);
		}

		::RPG::Client::TeamBuild* CreateBuild()
		{
			return ((::RPG::Client::TeamBuild*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDRECIPE_CREATEBUILD_OFFSET))(this);
		}

		::System::Boolean Equals(::RPG::Client::TeamBuildRecipe* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TeamBuildRecipe*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDRECIPE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDRECIPE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDRECIPE_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean _TryConvertAvatarID(::System::Int32 a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2, ::System::Collections::Generic::IList_1<::System::UInt32>* a3, ::System::Collections::Generic::ICollection_1<::System::UInt32>* a4)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Collections::Generic::ICollection_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDRECIPE__TRYCONVERTAVATARID_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Collections::Generic::IEnumerable_1<::System::UInt32>* _GetAlternativeAvatarIDs(::System::Collections::Generic::IList_1<::System::UInt32>* a1, ::Il2CppArray<::System::Collections::Generic::ICollection_1<::System::UInt32>*>* a2)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::UInt32>*(*)(::System::Collections::Generic::IList_1<::System::UInt32>*, ::Il2CppArray<::System::Collections::Generic::ICollection_1<::System::UInt32>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDRECIPE__GETALTERNATIVEAVATARIDS_OFFSET))(a1, a2);
		}

		static ::System::Boolean CheckColletionsContainNumber(::System::UInt32 a1, ::Il2CppArray<::System::Collections::Generic::ICollection_1<::System::UInt32>*>* a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::Il2CppArray<::System::Collections::Generic::ICollection_1<::System::UInt32>*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TEAMBUILDRECIPE_CHECKCOLLETIONSCONTAINNUMBER_OFFSET))(a1, a2);
		}

	};
}
