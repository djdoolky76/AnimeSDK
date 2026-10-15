#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class FBGCOPDOJNJ;
class PKFJHCPKMJD;
namespace RPG::Client { class RogueMagicScepterInfo; }
namespace System { class Object; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define MJOGAHHOJMH_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB97AA00)
#define MJOGAHHOJMH_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB97AAF0)
#define MJOGAHHOJMH_CTOR_OFFSET UNITYSDK_OFFSET(0xB97ABC0)
#define MJOGAHHOJMH_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xB97A230)
#define MJOGAHHOJMH_ENGHHKIICAB_OFFSET UNITYSDK_OFFSET(0xB97A910)
#define MJOGAHHOJMH_FCPJJDPMFBG_OFFSET UNITYSDK_OFFSET(0xB97A870)
#define MJOGAHHOJMH_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xB97A030)
#define MJOGAHHOJMH_GET_TRANS_OFFSET UNITYSDK_OFFSET(0xB97A050)
#define MJOGAHHOJMH_IDCAMKKDGIO_OFFSET UNITYSDK_OFFSET(0xB97A530)
#define MJOGAHHOJMH_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0xB97A0B0)
#define MJOGAHHOJMH_OHEBNABNJCN_OFFSET UNITYSDK_OFFSET(0xB97A5C0)
#define MJOGAHHOJMH_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xB97A040)
#define MJOGAHHOJMH__ONBIND_OFFSET UNITYSDK_OFFSET(0xB979E30)
#define MJOGAHHOJMH__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xB97A4D0)

inline static constexpr unsigned int MJOGAHHOJMH_TypeDefinitionIndex = 72314;

	class MJOGAHHOJMH : public ::FMPCODLIOLG
	{
	public:
		::Il2CppArray<::FBGCOPDOJNJ*>* NLGGONAAPAH; // 0x60
		::RPG::Client::RogueMagicScepterInfo* KMMGFKIGELG; // 0x68
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

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJOGAHHOJMH_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJOGAHHOJMH_EKGCGIDIFJJ_OFFSET))(this);
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
