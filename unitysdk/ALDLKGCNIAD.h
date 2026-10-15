#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"
class ALDLKGCNIAD;
class JBOLKLEHLME;
class JNJPJOPEDHP;
namespace RPG::GameCore { class FiveDimMapFaceConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ALDLKGCNIAD_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x15557BE0)
#define ALDLKGCNIAD_CHBDNKMADFL_OFFSET UNITYSDK_OFFSET(0x15558520)
#define ALDLKGCNIAD_CTOR_OFFSET UNITYSDK_OFFSET(0x15557E50)
#define ALDLKGCNIAD_DOFMICFLDKP_OFFSET UNITYSDK_OFFSET(0x15558140)
#define ALDLKGCNIAD_GET_FACEID_OFFSET UNITYSDK_OFFSET(0x15558420)
#define ALDLKGCNIAD_GET_FOGOFWARCONFIG_OFFSET UNITYSDK_OFFSET(0x15558500)
#define ALDLKGCNIAD_GET_ISSHOWEMPTYMAP_OFFSET UNITYSDK_OFFSET(0x155584C0)
#define ALDLKGCNIAD_GET_PATH_OFFSET UNITYSDK_OFFSET(0x15558460)
#define ALDLKGCNIAD_GET_SHOWLEVELVARNAME_OFFSET UNITYSDK_OFFSET(0x15558480)
#define ALDLKGCNIAD_GET_SHOWLEVELVARVALUES_OFFSET UNITYSDK_OFFSET(0x155584A0)
#define ALDLKGCNIAD_GET_SIZE_OFFSET UNITYSDK_OFFSET(0x15558440)
#define ALDLKGCNIAD_GET_SURFACELIST_OFFSET UNITYSDK_OFFSET(0x155584E0)
#define ALDLKGCNIAD_IDHDKNOOAKD_OFFSET UNITYSDK_OFFSET(0x15558380)
#define ALDLKGCNIAD_IHMEEFIMGJE_OFFSET UNITYSDK_OFFSET(0x15557ED0)
#define ALDLKGCNIAD_PILHDOLMJLN_OFFSET UNITYSDK_OFFSET(0x155580B0)
#define ALDLKGCNIAD_SET_FACEID_OFFSET UNITYSDK_OFFSET(0x15558430)
#define ALDLKGCNIAD_SET_FOGOFWARCONFIG_OFFSET UNITYSDK_OFFSET(0x15558510)
#define ALDLKGCNIAD_SET_ISSHOWEMPTYMAP_OFFSET UNITYSDK_OFFSET(0x155584D0)
#define ALDLKGCNIAD_SET_PATH_OFFSET UNITYSDK_OFFSET(0x15558470)
#define ALDLKGCNIAD_SET_SHOWLEVELVARNAME_OFFSET UNITYSDK_OFFSET(0x15558490)
#define ALDLKGCNIAD_SET_SHOWLEVELVARVALUES_OFFSET UNITYSDK_OFFSET(0x155584B0)
#define ALDLKGCNIAD_SET_SIZE_OFFSET UNITYSDK_OFFSET(0x15558450)
#define ALDLKGCNIAD_SET_SURFACELIST_OFFSET UNITYSDK_OFFSET(0x155584F0)

inline static constexpr unsigned int ALDLKGCNIAD_TypeDefinitionIndex = 74663;

	class ALDLKGCNIAD : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::JNJPJOPEDHP*>* _SurfaceList_k__BackingField; // 0x10
		::Il2CppArray<::System::Int16>* _ShowLevelVarValues_k__BackingField; // 0x18
		::JBOLKLEHLME* _FogOfWarConfig_k__BackingField; // 0x20
		::System::String* _ShowLevelVarName_k__BackingField; // 0x28
		::System::String* _Path_k__BackingField; // 0x30
		::RPG::MVector2 _Size_k__BackingField; // 0x38
		::System::UInt32 _FaceID_k__BackingField; // 0x40
		::System::Boolean _IsShowEmptyMap_k__BackingField; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALDLKGCNIAD_CTOR_OFFSET))(this);
		}

		static ::ALDLKGCNIAD* BPLPBPMEODA(::RPG::GameCore::FiveDimMapFaceConfig* a1)
		{
			return ((::ALDLKGCNIAD*(*)(::RPG::GameCore::FiveDimMapFaceConfig*))((::PBYTE)hIl2Cpp + ALDLKGCNIAD_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Nullable_1<::System::UInt32> IHMEEFIMGJE(::UnityEngine::Vector3 a1)
		{
			return ((::System::Nullable_1<::System::UInt32>(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ALDLKGCNIAD_IHMEEFIMGJE_OFFSET))(this, a1);
		}

		::System::Boolean PILHDOLMJLN(::RPG::MVector2 a1, ::Il2CppArray<::RPG::MVector2>* a2, ::Il2CppArray<::System::UInt32>* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::MVector2, ::Il2CppArray<::RPG::MVector2>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + ALDLKGCNIAD_PILHDOLMJLN_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean DOFMICFLDKP(::RPG::MVector2 a1, ::Il2CppArray<::RPG::MVector2>* a2, ::Il2CppArray<::System::UInt32>* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::MVector2, ::Il2CppArray<::RPG::MVector2>*, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + ALDLKGCNIAD_DOFMICFLDKP_OFFSET))(this, a1, a2, a3);
		}

		::System::Single IDHDKNOOAKD(::RPG::MVector2 a1, ::RPG::MVector2 a2, ::RPG::MVector2 a3)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::MVector2, ::RPG::MVector2, ::RPG::MVector2))((::PBYTE)hIl2Cpp + ALDLKGCNIAD_IDHDKNOOAKD_OFFSET))(this, a1, a2, a3);
		}

		::System::UInt32 get_FaceID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALDLKGCNIAD_GET_FACEID_OFFSET))(this);
		}

		::System::Void set_FaceID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ALDLKGCNIAD_SET_FACEID_OFFSET))(this, a1);
		}

		::RPG::MVector2 get_Size()
		{
			return ((::RPG::MVector2(*)(::PVOID))((::PBYTE)hIl2Cpp + ALDLKGCNIAD_GET_SIZE_OFFSET))(this);
		}

		::System::Void set_Size(::RPG::MVector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector2))((::PBYTE)hIl2Cpp + ALDLKGCNIAD_SET_SIZE_OFFSET))(this, a1);
		}

		::System::String* get_Path()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALDLKGCNIAD_GET_PATH_OFFSET))(this);
		}

		::System::Void set_Path(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ALDLKGCNIAD_SET_PATH_OFFSET))(this, a1);
		}

		::System::String* get_ShowLevelVarName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALDLKGCNIAD_GET_SHOWLEVELVARNAME_OFFSET))(this);
		}

		::System::Void set_ShowLevelVarName(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ALDLKGCNIAD_SET_SHOWLEVELVARNAME_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Int16>* get_ShowLevelVarValues()
		{
			return ((::Il2CppArray<::System::Int16>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALDLKGCNIAD_GET_SHOWLEVELVARVALUES_OFFSET))(this);
		}

		::System::Void set_ShowLevelVarValues(::Il2CppArray<::System::Int16>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Int16>*))((::PBYTE)hIl2Cpp + ALDLKGCNIAD_SET_SHOWLEVELVARVALUES_OFFSET))(this, a1);
		}

		::System::Boolean get_IsShowEmptyMap()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ALDLKGCNIAD_GET_ISSHOWEMPTYMAP_OFFSET))(this);
		}

		::System::Void set_IsShowEmptyMap(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ALDLKGCNIAD_SET_ISSHOWEMPTYMAP_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::JNJPJOPEDHP*>* get_SurfaceList()
		{
			return ((::System::Collections::Generic::List_1<::JNJPJOPEDHP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALDLKGCNIAD_GET_SURFACELIST_OFFSET))(this);
		}

		::System::Void set_SurfaceList(::System::Collections::Generic::List_1<::JNJPJOPEDHP*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::JNJPJOPEDHP*>*))((::PBYTE)hIl2Cpp + ALDLKGCNIAD_SET_SURFACELIST_OFFSET))(this, a1);
		}

		::JBOLKLEHLME* get_FogOfWarConfig()
		{
			return ((::JBOLKLEHLME*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALDLKGCNIAD_GET_FOGOFWARCONFIG_OFFSET))(this);
		}

		::System::Void set_FogOfWarConfig(::JBOLKLEHLME* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JBOLKLEHLME*))((::PBYTE)hIl2Cpp + ALDLKGCNIAD_SET_FOGOFWARCONFIG_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 CHBDNKMADFL(::JNJPJOPEDHP* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Int16 a4)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::JNJPJOPEDHP*, ::UnityEngine::Vector3, ::System::Single, ::System::Int16))((::PBYTE)hIl2Cpp + ALDLKGCNIAD_CHBDNKMADFL_OFFSET))(this, a1, a2, a3, a4);
		}

	};
