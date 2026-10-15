#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/RPG/MVector3.h"
class BDPDNAECJII;
class HNLKNLJBHDD;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }

#define IAANKDNLKHL_ACGGDLLBCHA_OFFSET UNITYSDK_OFFSET(0x1C689E60)
#define IAANKDNLKHL_BMBNAEJBNOI_OFFSET UNITYSDK_OFFSET(0x1C68A340)
#define IAANKDNLKHL_CGMBBLCBEDO_OFFSET UNITYSDK_OFFSET(0x1C68A050)
#define IAANKDNLKHL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C688F50)
#define IAANKDNLKHL_DAHCNIIIJNC_1_OFFSET UNITYSDK_OFFSET(0x1C689760)
#define IAANKDNLKHL_DAHCNIIIJNC_OFFSET UNITYSDK_OFFSET(0x1C689290)
#define IAANKDNLKHL_ENFDGHFKAFC_OFFSET UNITYSDK_OFFSET(0x1C689B90)
#define IAANKDNLKHL_GET_SPAWNBRICKLIST_OFFSET UNITYSDK_OFFSET(0x1C68A730)
#define IAANKDNLKHL_GNOICEIBMPB_OFFSET UNITYSDK_OFFSET(0x1C68A3A0)
#define IAANKDNLKHL_HADOHLNHHGB_OFFSET UNITYSDK_OFFSET(0x1C6890F0)
#define IAANKDNLKHL_KNNPANHENNL_OFFSET UNITYSDK_OFFSET(0x1C689FF0)
#define IAANKDNLKHL_LKGOPCGFIMI_OFFSET UNITYSDK_OFFSET(0x1C689550)
#define IAANKDNLKHL_MJJDBGOIAGH_OFFSET UNITYSDK_OFFSET(0x1C6894F0)
#define IAANKDNLKHL_MLCMEJCOOMO_OFFSET UNITYSDK_OFFSET(0x1C68A4E0)
#define IAANKDNLKHL_NJFNPKOJGBO_OFFSET UNITYSDK_OFFSET(0x1C68A600)
#define IAANKDNLKHL_OABLDCCJFKD_OFFSET UNITYSDK_OFFSET(0x1C689960)
#define IAANKDNLKHL_SET_SPAWNBRICKLIST_OFFSET UNITYSDK_OFFSET(0x1C68A740)

inline static constexpr unsigned int IAANKDNLKHL_TypeDefinitionIndex = 37155;

	class IAANKDNLKHL : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::HNLKNLJBHDD*>* _SpawnBrickList_k__BackingField; // 0x10
		::System::Collections::Generic::Queue_1<::System::UInt32>* EPLANKEGENE; // 0x18
		::BDPDNAECJII* NMNILJHPGOK; // 0x20
		::System::Single DDGIKPBHKAN; // 0x28
		::System::Single MNAIACKPNFH; // 0x2C
		::System::Single PGHEMEFGNFB; // 0x30
		::System::Int32 EMFCNMIDGAD; // 0x34
		::System::UInt32 LPBOPKFCKPE; // 0x38
		::System::Boolean OLOLCIBBIKP; // 0x3C
		::System::Boolean PEGNAMLHJGA; // 0x3D
		::System::Byte _padding0[0x2];
		::System::UInt32 BOHKGIMLCNH; // 0x40
		::System::Void _ctor(::BDPDNAECJII* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::UInt32 a6, ::System::UInt32 a7)
		{
			return ((::System::Void(*)(::PVOID, ::BDPDNAECJII*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + IAANKDNLKHL_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void HADOHLNHHGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAANKDNLKHL_HADOHLNHHGB_OFFSET))(this);
		}

		::HNLKNLJBHDD* DAHCNIIIJNC(::RPG::MVector2 a1, ::System::UInt32 a2)
		{
			return ((::HNLKNLJBHDD*(*)(::PVOID, ::RPG::MVector2, ::System::UInt32))((::PBYTE)hIl2Cpp + IAANKDNLKHL_DAHCNIIIJNC_OFFSET))(this, a1, a2);
		}

		::HNLKNLJBHDD* DAHCNIIIJNC_1(::System::UInt32 a1, ::RPG::MVector2 a2, ::System::Single a3)
		{
			return ((::HNLKNLJBHDD*(*)(::PVOID, ::System::UInt32, ::RPG::MVector2, ::System::Single))((::PBYTE)hIl2Cpp + IAANKDNLKHL_DAHCNIIIJNC_1_OFFSET))(this, a1, a2, a3);
		}

		::HNLKNLJBHDD* OABLDCCJFKD(::System::UInt32 a1, ::RPG::MVector2 a2, ::RPG::MVector3 a3)
		{
			return ((::HNLKNLJBHDD*(*)(::PVOID, ::System::UInt32, ::RPG::MVector2, ::RPG::MVector3))((::PBYTE)hIl2Cpp + IAANKDNLKHL_OABLDCCJFKD_OFFSET))(this, a1, a2, a3);
		}

		::RPG::MVector2 ENFDGHFKAFC()
		{
			return ((::RPG::MVector2(*)(::PVOID))((::PBYTE)hIl2Cpp + IAANKDNLKHL_ENFDGHFKAFC_OFFSET))(this);
		}

		::System::UInt32 KNNPANHENNL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IAANKDNLKHL_KNNPANHENNL_OFFSET))(this);
		}

		::System::Void BMBNAEJBNOI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAANKDNLKHL_BMBNAEJBNOI_OFFSET))(this);
		}

		::System::Void GNOICEIBMPB(::Il2CppArray<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + IAANKDNLKHL_GNOICEIBMPB_OFFSET))(this, a1);
		}

		::HNLKNLJBHDD* MLCMEJCOOMO()
		{
			return ((::HNLKNLJBHDD*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAANKDNLKHL_MLCMEJCOOMO_OFFSET))(this);
		}

		::System::Single ACGGDLLBCHA()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IAANKDNLKHL_ACGGDLLBCHA_OFFSET))(this);
		}

		::RPG::MVector3 LKGOPCGFIMI(::System::UInt32 a1)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IAANKDNLKHL_LKGOPCGFIMI_OFFSET))(this, a1);
		}

		::System::UInt32 MJJDBGOIAGH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IAANKDNLKHL_MJJDBGOIAGH_OFFSET))(this);
		}

		::System::Void CGMBBLCBEDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAANKDNLKHL_CGMBBLCBEDO_OFFSET))(this);
		}

		::System::Void NJFNPKOJGBO(::Entitas::IContext* a1, ::Entitas::IEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + IAANKDNLKHL_NJFNPKOJGBO_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::HNLKNLJBHDD*>* get_SpawnBrickList()
		{
			return ((::System::Collections::Generic::List_1<::HNLKNLJBHDD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IAANKDNLKHL_GET_SPAWNBRICKLIST_OFFSET))(this);
		}

		::System::Void set_SpawnBrickList(::System::Collections::Generic::List_1<::HNLKNLJBHDD*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::HNLKNLJBHDD*>*))((::PBYTE)hIl2Cpp + IAANKDNLKHL_SET_SPAWNBRICKLIST_OFFSET))(this, a1);
		}

	};
