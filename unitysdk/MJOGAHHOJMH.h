#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class FBGCOPDOJNJ;
class PKFJHCPKMJD;
namespace RPG::Client { class RogueMagicScepterInfo; }
namespace System { class Object; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define MJOGAHHOJMH_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A3B9E60)
#define MJOGAHHOJMH_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1A3B9F50)
#define MJOGAHHOJMH_CTOR_OFFSET UNITYSDK_OFFSET(0x1A3BA020)
#define MJOGAHHOJMH_ENGHHKIICAB_OFFSET UNITYSDK_OFFSET(0x1A3B9D70)
#define MJOGAHHOJMH_FCPJJDPMFBG_OFFSET UNITYSDK_OFFSET(0x1A3B9CD0)
#define MJOGAHHOJMH_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x1A3B9480)
#define MJOGAHHOJMH_GET_TRANS_OFFSET UNITYSDK_OFFSET(0x1A3B94A0)
#define MJOGAHHOJMH_IDCAMKKDGIO_OFFSET UNITYSDK_OFFSET(0x1A3B9980)
#define MJOGAHHOJMH_OHEBNABNJCN_OFFSET UNITYSDK_OFFSET(0x1A3B9A10)
#define MJOGAHHOJMH_SET_INDEX_OFFSET UNITYSDK_OFFSET(0x1A3B9490)
#define MJOGAHHOJMH__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x1A3B9500)
#define MJOGAHHOJMH__ONBIND_OFFSET UNITYSDK_OFFSET(0x1A3B9230)
#define MJOGAHHOJMH__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x1A3B9920)
#define MJOGAHHOJMH__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1A3B9680)

inline static constexpr unsigned int MJOGAHHOJMH_TypeDefinitionIndex = 74390;

	class MJOGAHHOJMH : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::RogueMagicScepterInfo* KMMGFKIGELG; // 0x60
		::Il2CppArray<::FBGCOPDOJNJ*>* NLGGONAAPAH; // 0x68
		::UnityEngine::Animation* PMOJILOJEPE; // 0x70
		::System::Int32 _Index_k__BackingField; // 0x78
		// static const ::System::String* DJCBDJMACFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJOGAHHOJMH_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJOGAHHOJMH__ONBIND_OFFSET))(this);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MJOGAHHOJMH_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MJOGAHHOJMH_SET_INDEX_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_Trans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJOGAHHOJMH_GET_TRANS_OFFSET))(this);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJOGAHHOJMH__INITVARONCE_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJOGAHHOJMH__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJOGAHHOJMH__ONDISPOSE_OFFSET))(this);
		}

		::System::Void IDCAMKKDGIO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MJOGAHHOJMH_IDCAMKKDGIO_OFFSET))(this, a1);
		}

		::System::Void OHEBNABNJCN(::PKFJHCPKMJD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKFJHCPKMJD*))((::PBYTE)hIl2Cpp + MJOGAHHOJMH_OHEBNABNJCN_OFFSET))(this, a1);
		}

		::FBGCOPDOJNJ* FCPJJDPMFBG(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::FBGCOPDOJNJ*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + MJOGAHHOJMH_FCPJJDPMFBG_OFFSET))(this, a1, a2);
		}

		::System::Void ENGHHKIICAB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MJOGAHHOJMH_ENGHHKIICAB_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJOGAHHOJMH_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJOGAHHOJMH_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
