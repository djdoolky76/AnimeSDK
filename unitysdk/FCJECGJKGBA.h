#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"
class AJDAJPHJBME;
namespace RPG::Client { class CameraBlendCurve; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace System { class String; }

#define FCJECGJKGBA_AAKOBDJLMNL_OFFSET UNITYSDK_OFFSET(0x156BBEC0)
#define FCJECGJKGBA_CTOR_OFFSET UNITYSDK_OFFSET(0x156BBD90)
#define FCJECGJKGBA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x156BC120)
#define FCJECGJKGBA_FDJEJNODIOB_OFFSET UNITYSDK_OFFSET(0x156BC010)
#define FCJECGJKGBA_FKGHJKNDCDK_OFFSET UNITYSDK_OFFSET(0x156BC240)
#define FCJECGJKGBA_GET_ISEND_OFFSET UNITYSDK_OFFSET(0x156BCA10)
#define FCJECGJKGBA_GET_ISVCAMSETUP_OFFSET UNITYSDK_OFFSET(0x156BCA30)
#define FCJECGJKGBA_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x156BC990)
#define FCJECGJKGBA_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x156BBDA0)
#define FCJECGJKGBA_NDPIGEHKKAI_OFFSET UNITYSDK_OFFSET(0x156BC500)
#define FCJECGJKGBA_OEEOLGPGEHD_OFFSET UNITYSDK_OFFSET(0x156BCA50)
#define FCJECGJKGBA_OOGMJHICCMG_OFFSET UNITYSDK_OFFSET(0x156BBF90)
#define FCJECGJKGBA_SET_ISEND_OFFSET UNITYSDK_OFFSET(0x156BCA20)
#define FCJECGJKGBA_SET_ISVCAMSETUP_OFFSET UNITYSDK_OFFSET(0x156BCA40)

inline static constexpr unsigned int FCJECGJKGBA_TypeDefinitionIndex = 69659;

	class FCJECGJKGBA : public ::System::Object
	{
	public:
		::System::String* HEHALNJDIBD; // 0x10
		::RPG::Client::CameraBlendCurve* PEMGKBNOBIN; // 0x18
		::AJDAJPHJBME* EMHKDLAOMHI; // 0x20
		::System::Single HFJJFMBPDFD; // 0x28
		::System::Int32 NJFKHPIHDEF; // 0x2C
		::System::Boolean _IsVcamSetup_k__BackingField; // 0x30
		::System::Boolean _IsEnd_k__BackingField; // 0x31
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FCJECGJKGBA_CTOR_OFFSET))(this, a1);
		}

		::System::Void KPJGDHLENIP(::RPG::Client::PipelineCameraEngine* a1, ::AJDAJPHJBME* a2, ::System::Single a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::AJDAJPHJBME*, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + FCJECGJKGBA_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void OOGMJHICCMG(::RPG::Client::PipelineCameraEngine* a1, ::System::Single a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::System::Single, ::System::String*))((::PBYTE)hIl2Cpp + FCJECGJKGBA_OOGMJHICCMG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCJECGJKGBA_DISPOSE_OFFSET))(this);
		}

		::System::Void FKGHJKNDCDK(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FCJECGJKGBA_FKGHJKNDCDK_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void NDPIGEHKKAI(::UnityEngine::Matrix4x4 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + FCJECGJKGBA_NDPIGEHKKAI_OFFSET))(this, a1);
		}

		::System::Void FDJEJNODIOB(::RPG::Client::PipelineCameraEngine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*))((::PBYTE)hIl2Cpp + FCJECGJKGBA_FDJEJNODIOB_OFFSET))(this, a1);
		}

		::System::Void AAKOBDJLMNL(::RPG::Client::PipelineCameraEngine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*))((::PBYTE)hIl2Cpp + FCJECGJKGBA_AAKOBDJLMNL_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FCJECGJKGBA_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Boolean get_IsEnd()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FCJECGJKGBA_GET_ISEND_OFFSET))(this);
		}

		::System::Void set_IsEnd(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FCJECGJKGBA_SET_ISEND_OFFSET))(this, a1);
		}

		::System::Boolean get_IsVcamSetup()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FCJECGJKGBA_GET_ISVCAMSETUP_OFFSET))(this);
		}

		::System::Void set_IsVcamSetup(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FCJECGJKGBA_SET_ISVCAMSETUP_OFFSET))(this, a1);
		}

		::AJDAJPHJBME* OEEOLGPGEHD()
		{
			return ((::AJDAJPHJBME*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCJECGJKGBA_OEEOLGPGEHD_OFFSET))(this);
		}

	};
