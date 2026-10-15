#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CustomLineType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class LineRenderer; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_CUSTOMLINEPROCEDURAL_AELJGEIICMD_OFFSET UNITYSDK_OFFSET(0xCBE20E0)
#define RPG_CLIENT_CUSTOMLINEPROCEDURAL_AWAKE_OFFSET UNITYSDK_OFFSET(0xCBDFF40)
#define RPG_CLIENT_CUSTOMLINEPROCEDURAL_BNCEBOGICDE_OFFSET UNITYSDK_OFFSET(0xCBE23A0)
#define RPG_CLIENT_CUSTOMLINEPROCEDURAL_CAFGLAMPEJM_OFFSET UNITYSDK_OFFSET(0xCBE0F30)
#define RPG_CLIENT_CUSTOMLINEPROCEDURAL_CTOR_OFFSET UNITYSDK_OFFSET(0xCBE27C0)
#define RPG_CLIENT_CUSTOMLINEPROCEDURAL_DNOFNPLMGLG_OFFSET UNITYSDK_OFFSET(0xCBE2480)
#define RPG_CLIENT_CUSTOMLINEPROCEDURAL_HFJPCNFKDLA_OFFSET UNITYSDK_OFFSET(0xCBE1850)
#define RPG_CLIENT_CUSTOMLINEPROCEDURAL_KMGDMOOPHAG_OFFSET UNITYSDK_OFFSET(0xCBE0A40)
#define RPG_CLIENT_CUSTOMLINEPROCEDURAL_LJADHMCHOHP_OFFSET UNITYSDK_OFFSET(0xCBE0210)
#define RPG_CLIENT_CUSTOMLINEPROCEDURAL_REBUILDLINE_OFFSET UNITYSDK_OFFSET(0xCBE0010)
#define RPG_CLIENT_CUSTOMLINEPROCEDURAL_UPDATEPOINTS_OFFSET UNITYSDK_OFFSET(0xCBE00A0)

namespace RPG::Client
{
	class CustomLineProcedural : public ::UnityEngine::MonoBehaviour
	{
	public:
		::Il2CppArray<::UnityEngine::LineRenderer*>* Lines; // 0x18
		::RPG::Client::CustomLineType LineType; // 0x20
		::System::Boolean UseWorldSpace; // 0x24
		::System::Byte _padding0[0x3];
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* Points; // 0x28
		::UnityEngine::Vector3 PointOffset; // 0x30
		::System::Int32 InterpolationCount; // 0x3C
		::System::Int32 CtrlPointCount; // 0x40
		::System::Byte _padding1[0x4];
		::UnityEngine::Transform* EndNode; // 0x48
		::System::Collections::Generic::List_1<::System::Object*>* MJMCDEHJDAA; // 0x50
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_MICLDHHAFBG()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)UnitySDK::FromName("RPG.Client", "CustomLineProcedural")->GetStaticField(0x1F900);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMLINEPROCEDURAL_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMLINEPROCEDURAL_AWAKE_OFFSET))(this);
		}

		::System::Void UpdatePoints(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMLINEPROCEDURAL_UPDATEPOINTS_OFFSET))(this, a1);
		}

		::System::Void RebuildLine()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMLINEPROCEDURAL_REBUILDLINE_OFFSET))(this);
		}

		::System::Boolean LJADHMCHOHP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMLINEPROCEDURAL_LJADHMCHOHP_OFFSET))(this);
		}

		::System::Void AELJGEIICMD(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMLINEPROCEDURAL_AELJGEIICMD_OFFSET))(this, a1, a2);
		}

		::System::Void BNCEBOGICDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMLINEPROCEDURAL_BNCEBOGICDE_OFFSET))(this);
		}

		::System::Void KMGDMOOPHAG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMLINEPROCEDURAL_KMGDMOOPHAG_OFFSET))(this);
		}

		::System::Void CAFGLAMPEJM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMLINEPROCEDURAL_CAFGLAMPEJM_OFFSET))(this);
		}

		::System::Void HFJPCNFKDLA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMLINEPROCEDURAL_HFJPCNFKDLA_OFFSET))(this);
		}

		static ::UnityEngine::Vector3 DNOFNPLMGLG(::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Single a4)
		{
			return ((::UnityEngine::Vector3(*)(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CUSTOMLINEPROCEDURAL_DNOFNPLMGLG_OFFSET))(a1, a2, a3, a4);
		}

	};
}
