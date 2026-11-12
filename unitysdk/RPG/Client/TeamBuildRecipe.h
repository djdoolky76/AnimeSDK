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

#define RPG_CLIENT_TEAMBUILDRECIPE_CHECKCOLLETIONSCONTAINNUMBER_OFFSET UNITYSDK_OFFSET(0xEC789B0)
#define RPG_CLIENT_TEAMBUILDRECIPE_CREATEBUILD_OFFSET UNITYSDK_OFFSET(0xEC78440)
#define RPG_CLIENT_TEAMBUILDRECIPE_CREATE_1_OFFSET UNITYSDK_OFFSET(0xEC76480)
#define RPG_CLIENT_TEAMBUILDRECIPE_CREATE_OFFSET UNITYSDK_OFFSET(0xEC75A00)
#define RPG_CLIENT_TEAMBUILDRECIPE_CTOR_OFFSET UNITYSDK_OFFSET(0xEC78430)
#define RPG_CLIENT_TEAMBUILDRECIPE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xEC78870)
#define RPG_CLIENT_TEAMBUILDRECIPE_EQUALS_OFFSET UNITYSDK_OFFSET(0xEC78800)
#define RPG_CLIENT_TEAMBUILDRECIPE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xEC78960)
#define RPG_CLIENT_TEAMBUILDRECIPE_GET_IDENTIFIER_OFFSET UNITYSDK_OFFSET(0xEC77550)
#define RPG_CLIENT_TEAMBUILDRECIPE_GET_TARGETAVATARID_OFFSET UNITYSDK_OFFSET(0xEC76C40)
#define RPG_CLIENT_TEAMBUILDRECIPE_GET_TARGETAVATARPOSITION_OFFSET UNITYSDK_OFFSET(0xEC77560)
#define RPG_CLIENT_TEAMBUILDRECIPE_GET_TEAMMATES_OFFSET UNITYSDK_OFFSET(0xEC77570)
#define RPG_CLIENT_TEAMBUILDRECIPE__GETALTERNATIVEAVATARIDS_OFFSET UNITYSDK_OFFSET(0xEC77E90)
#define RPG_CLIENT_TEAMBUILDRECIPE__TRYCONVERTAVATARID_OFFSET UNITYSDK_OFFSET(0xEC77580)

namespace RPG::Client
{
	inline static constexpr unsigned int TeamBuildRecipe_TypeDefinitionIndex = 70039;

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
