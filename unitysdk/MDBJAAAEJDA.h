#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/MVector3.h"
class GOHKGHGNKGE;
class KFELGAIGHAP;
namespace RPG::GameCore { class AvatarColliderCameraConfig; }
namespace RPG::GameCore { class CharacterEntityColliderConfig; }
namespace RPG::GameCore { class EntityColliderConfig; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MDBJAAAEJDA_CCTOR_OFFSET UNITYSDK_OFFSET(0xB896130)
#define MDBJAAAEJDA_CNMFKACONIP_OFFSET UNITYSDK_OFFSET(0xB894CC0)
#define MDBJAAAEJDA_FPOHLMBPOIA_OFFSET UNITYSDK_OFFSET(0xB895320)
#define MDBJAAAEJDA_GNDFGJBIMLG_OFFSET UNITYSDK_OFFSET(0xB896090)
#define MDBJAAAEJDA_HCFINLKPIHL_OFFSET UNITYSDK_OFFSET(0xB8949C0)
#define MDBJAAAEJDA_HJDNLDJEECI_OFFSET UNITYSDK_OFFSET(0xB895D10)
#define MDBJAAAEJDA_KOPAOPHKFPM_OFFSET UNITYSDK_OFFSET(0xB895B60)
#define MDBJAAAEJDA_LBGIEFCNMNH_OFFSET UNITYSDK_OFFSET(0xB895650)
#define MDBJAAAEJDA_LMEAHGFFMIB_OFFSET UNITYSDK_OFFSET(0xB895510)
#define MDBJAAAEJDA_MJPBGAONBPJ_OFFSET UNITYSDK_OFFSET(0xB895E90)
#define MDBJAAAEJDA_NELKDODDOOH_OFFSET UNITYSDK_OFFSET(0xB895120)
#define MDBJAAAEJDA_NJAJKFDIGBG_OFFSET UNITYSDK_OFFSET(0xB8959A0)
#define MDBJAAAEJDA_OLGEBOGLFBH_OFFSET UNITYSDK_OFFSET(0xB895F10)
#define MDBJAAAEJDA_OPKIILEJGNN_OFFSET UNITYSDK_OFFSET(0xB895800)

inline static constexpr unsigned int MDBJAAAEJDA_TypeDefinitionIndex = 56504;

	class MDBJAAAEJDA : public ::System::Object
	{
	public:
		static ::RPG::GameCore::EntityColliderConfig** StaticGet_ACGBLPGJIBJ()
		{
			return (::RPG::GameCore::EntityColliderConfig**)UnitySDK::FromName("", "MDBJAAAEJDA")->GetStaticField(0x5E770);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::GOHKGHGNKGE*>** StaticGet_DEDIANPMNAM()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::GOHKGHGNKGE*>**)UnitySDK::FromName("", "MDBJAAAEJDA")->GetStaticField(0x5E778);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::CharacterEntityColliderConfig*>** StaticGet_FIONBDLMHBL()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::CharacterEntityColliderConfig*>**)UnitySDK::FromName("", "MDBJAAAEJDA")->GetStaticField(0x5E780);
		}

		// static const ::System::String* GNEINLIJOBC; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MDBJAAAEJDA_CCTOR_OFFSET))();
		}

		static ::System::Void HCFINLKPIHL()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MDBJAAAEJDA_HCFINLKPIHL_OFFSET))();
		}

		static ::System::Void CNMFKACONIP(::RPG::GameCore::CharacterEntityColliderConfig* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::CharacterEntityColliderConfig*, ::System::String*))((::PBYTE)hIl2Cpp + MDBJAAAEJDA_CNMFKACONIP_OFFSET))(a1, a2);
		}

		static ::System::Void NELKDODDOOH(::RPG::GameCore::CharacterEntityColliderConfig* a1, ::System::String* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::RPG::GameCore::CharacterEntityColliderConfig*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + MDBJAAAEJDA_NELKDODDOOH_OFFSET))(a1, a2, a3);
		}

		static ::System::Void FPOHLMBPOIA()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MDBJAAAEJDA_FPOHLMBPOIA_OFFSET))();
		}

		static ::System::Void LMEAHGFFMIB()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MDBJAAAEJDA_LMEAHGFFMIB_OFFSET))();
		}

		static ::KFELGAIGHAP* LBGIEFCNMNH(::RPG::GameCore::TaskContext* a1, ::System::String* a2, ::System::String* a3)
		{
			return ((::KFELGAIGHAP*(*)(::RPG::GameCore::TaskContext*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MDBJAAAEJDA_LBGIEFCNMNH_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::RPG::GameCore::TaskConfig*>* OPKIILEJGNN(::System::String* a1, ::System::String* a2)
		{
			return ((::Il2CppArray<::RPG::GameCore::TaskConfig*>*(*)(::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MDBJAAAEJDA_OPKIILEJGNN_OFFSET))(a1, a2);
		}

		static ::KFELGAIGHAP* NJAJKFDIGBG(::RPG::GameCore::TaskContext* a1, ::System::String* a2, ::System::Single a3)
		{
			return ((::KFELGAIGHAP*(*)(::RPG::GameCore::TaskContext*, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MDBJAAAEJDA_NJAJKFDIGBG_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::RPG::GameCore::TaskConfig*>* KOPAOPHKFPM(::System::String* a1, ::System::Single a2)
		{
			return ((::Il2CppArray<::RPG::GameCore::TaskConfig*>*(*)(::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MDBJAAAEJDA_KOPAOPHKFPM_OFFSET))(a1, a2);
		}

		static ::System::Void HJDNLDJEECI()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MDBJAAAEJDA_HJDNLDJEECI_OFFSET))();
		}

		static ::System::Single MJPBGAONBPJ(::System::UInt32 a1)
		{
			return ((::System::Single(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MDBJAAAEJDA_MJPBGAONBPJ_OFFSET))(a1);
		}

		static ::RPG::MVector3 GNDFGJBIMLG(::System::UInt32 a1)
		{
			return ((::RPG::MVector3(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MDBJAAAEJDA_GNDFGJBIMLG_OFFSET))(a1);
		}

		static ::RPG::GameCore::AvatarColliderCameraConfig* OLGEBOGLFBH(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::AvatarColliderCameraConfig*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MDBJAAAEJDA_OLGEBOGLFBH_OFFSET))(a1);
		}

	};
