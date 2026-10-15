#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BMNBIGCFJJB;
class CONGPILMBPA;
class KKPJOMHOLPJ;
class MHHGNECMODJ;
class MIADGHGEBPJ_MFPPNLHPEND;
namespace RPG::Client { template <typename T1, typename T2, typename T3> class TwoKeyDictionary_3; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class PlayNPCBubbleTalk; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class LinkedList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MIADGHGEBPJ_AKPPGEJAGKG_OFFSET UNITYSDK_OFFSET(0xB939700)
#define MIADGHGEBPJ_BBPGLNALNNN_OFFSET UNITYSDK_OFFSET(0xB94ABE0)
#define MIADGHGEBPJ_CCTOR_OFFSET UNITYSDK_OFFSET(0xB94B850)
#define MIADGHGEBPJ_CTOR_OFFSET UNITYSDK_OFFSET(0xB93A090)
#define MIADGHGEBPJ_DBNNNGCPMPM_OFFSET UNITYSDK_OFFSET(0xB94A090)
#define MIADGHGEBPJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB938300)
#define MIADGHGEBPJ_DKKJNPPHDPM_OFFSET UNITYSDK_OFFSET(0xB939D80)
#define MIADGHGEBPJ_DLEKKNLMCHC_OFFSET UNITYSDK_OFFSET(0xB94B5F0)
#define MIADGHGEBPJ_FCENOKKCPNE_OFFSET UNITYSDK_OFFSET(0xB94A620)
#define MIADGHGEBPJ_FMLAGEANDLM_OFFSET UNITYSDK_OFFSET(0xB94A7F0)
#define MIADGHGEBPJ_GET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0xB94B840)
#define MIADGHGEBPJ_IFGBLJFKAMN_OFFSET UNITYSDK_OFFSET(0xB93A740)
#define MIADGHGEBPJ_INIJCJJLPKM_OFFSET UNITYSDK_OFFSET(0xB938D20)
#define MIADGHGEBPJ_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xB938670)
#define MIADGHGEBPJ_JLFABLDDFNN_OFFSET UNITYSDK_OFFSET(0xB94A3C0)
#define MIADGHGEBPJ_MODHBCKPJPB_OFFSET UNITYSDK_OFFSET(0xB94B000)
#define MIADGHGEBPJ_NKAHOBJOGNE_OFFSET UNITYSDK_OFFSET(0xB949F70)
#define MIADGHGEBPJ_OOENBABOOMK_OFFSET UNITYSDK_OFFSET(0xB9397E0)
#define MIADGHGEBPJ_PKDJLGFKJKM_OFFSET UNITYSDK_OFFSET(0xB94A8E0)

	class MIADGHGEBPJ : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::KKPJOMHOLPJ*>* GFFAGJOELCH; // 0x10
		::MHHGNECMODJ* JHFKOHNKLMH; // 0x18
		::System::Collections::Generic::LinkedList_1<::System::Object*>* NMHGPOINNDE; // 0x20
		::RPG::Client::TwoKeyDictionary_3<::System::Int32, ::System::Int32, ::System::Int32>* HFPAMFHJJMG; // 0x28
		::System::Collections::Generic::LinkedList_1<::System::Object*>* OMDOJLJEJEM; // 0x30
		::RPG::GameCore::GameEntity* CFKHNPGEAJA; // 0x38
		::System::String* _UniqueName_k__BackingField; // 0x40
		::System::Boolean DKLMKMCGGPC; // 0x48
		::System::Byte _padding0[0x3];
		::System::Single FNKPBGKLFED; // 0x4C
		::System::Single BDDGMAOMCPI; // 0x50
		::System::Single HBDJCFFDGDD; // 0x54
		::System::Single BPAIDCADMDO; // 0x58
		::System::Single IKPGEMHGIME; // 0x5C
		::System::Single OIKOMNFPCDD; // 0x60
		::System::Single LAMPDMCDDLF; // 0x64
		::System::Single BHHHGKKOFAK; // 0x68
		::System::Single FGFCCDEBKJA; // 0x6C
		static ::Il2CppArray<::System::Int32>** StaticGet_EMFIHCCMNII()
		{
			return (::Il2CppArray<::System::Int32>**)UnitySDK::FromName("", "MIADGHGEBPJ")->GetStaticField(0x6FBD0);
		}

		// static const ::System::Object OBJJKPKOLKM; // 0x0
		// static const ::System::Object HFAHICMDFOK; // 0x0
		::System::Void _ctor(::System::String* a1, ::MHHGNECMODJ* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::MHHGNECMODJ*, ::System::Single))((::PBYTE)hIl2Cpp + MIADGHGEBPJ_CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIADGHGEBPJ_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIADGHGEBPJ_DISPOSE_OFFSET))(this);
		}

		::System::Boolean JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIADGHGEBPJ_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void INIJCJJLPKM(::CONGPILMBPA* a1, ::Il2CppArray<::BMNBIGCFJJB*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::CONGPILMBPA*, ::Il2CppArray<::BMNBIGCFJJB*>*))((::PBYTE)hIl2Cpp + MIADGHGEBPJ_INIJCJJLPKM_OFFSET))(this, a1, a2);
		}

		::System::Void AKPPGEJAGKG(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIADGHGEBPJ_AKPPGEJAGKG_OFFSET))(this, a1);
		}

		::System::Void OOENBABOOMK(::System::UInt32 a1, ::RPG::GameCore::PlayNPCBubbleTalk* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::PlayNPCBubbleTalk*))((::PBYTE)hIl2Cpp + MIADGHGEBPJ_OOENBABOOMK_OFFSET))(this, a1, a2);
		}

		::System::Void DKKJNPPHDPM(::System::UInt32 a1, ::System::Int32 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MIADGHGEBPJ_DKKJNPPHDPM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void IFGBLJFKAMN(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MIADGHGEBPJ_IFGBLJFKAMN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DLEKKNLMCHC(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MIADGHGEBPJ_DLEKKNLMCHC_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FCENOKKCPNE(::System::Single a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MIADGHGEBPJ_FCENOKKCPNE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FMLAGEANDLM(::System::Single a1, ::System::Object* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Object*))((::PBYTE)hIl2Cpp + MIADGHGEBPJ_FMLAGEANDLM_OFFSET))(this, a1, a2);
		}

		::System::Void MODHBCKPJPB(::MIADGHGEBPJ_MFPPNLHPEND* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MIADGHGEBPJ_MFPPNLHPEND*))((::PBYTE)hIl2Cpp + MIADGHGEBPJ_MODHBCKPJPB_OFFSET))(this, a1);
		}

		::System::Void NKAHOBJOGNE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIADGHGEBPJ_NKAHOBJOGNE_OFFSET))(this);
		}

		::System::Boolean BBPGLNALNNN(::BMNBIGCFJJB* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::BMNBIGCFJJB*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MIADGHGEBPJ_BBPGLNALNNN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PKDJLGFKJKM(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MIADGHGEBPJ_PKDJLGFKJKM_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void DBNNNGCPMPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIADGHGEBPJ_DBNNNGCPMPM_OFFSET))(this);
		}

		::System::Void JLFABLDDFNN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIADGHGEBPJ_JLFABLDDFNN_OFFSET))(this);
		}

		::System::String* get_UniqueName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIADGHGEBPJ_GET_UNIQUENAME_OFFSET))(this);
		}

	};
