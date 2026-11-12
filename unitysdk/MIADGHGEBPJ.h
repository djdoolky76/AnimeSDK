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

#define MIADGHGEBPJ_AKPPGEJAGKG_OFFSET UNITYSDK_OFFSET(0xC1EDDB0)
#define MIADGHGEBPJ_BBPGLNALNNN_OFFSET UNITYSDK_OFFSET(0xC1FF590)
#define MIADGHGEBPJ_CCTOR_OFFSET UNITYSDK_OFFSET(0xC200200)
#define MIADGHGEBPJ_CTOR_OFFSET UNITYSDK_OFFSET(0xC1EE740)
#define MIADGHGEBPJ_DBNNNGCPMPM_OFFSET UNITYSDK_OFFSET(0xC1FEA40)
#define MIADGHGEBPJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC1ECA20)
#define MIADGHGEBPJ_DKKJNPPHDPM_OFFSET UNITYSDK_OFFSET(0xC1EE430)
#define MIADGHGEBPJ_DLEKKNLMCHC_OFFSET UNITYSDK_OFFSET(0xC1FFFA0)
#define MIADGHGEBPJ_FCENOKKCPNE_OFFSET UNITYSDK_OFFSET(0xC1FEFD0)
#define MIADGHGEBPJ_FMLAGEANDLM_OFFSET UNITYSDK_OFFSET(0xC1FF1A0)
#define MIADGHGEBPJ_GET_UNIQUENAME_OFFSET UNITYSDK_OFFSET(0xC2001F0)
#define MIADGHGEBPJ_IFGBLJFKAMN_OFFSET UNITYSDK_OFFSET(0xC1EEDF0)
#define MIADGHGEBPJ_INIJCJJLPKM_OFFSET UNITYSDK_OFFSET(0xC1ED3D0)
#define MIADGHGEBPJ_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xC1ECD80)
#define MIADGHGEBPJ_JLFABLDDFNN_OFFSET UNITYSDK_OFFSET(0xC1FED70)
#define MIADGHGEBPJ_MODHBCKPJPB_OFFSET UNITYSDK_OFFSET(0xC1FF9B0)
#define MIADGHGEBPJ_NKAHOBJOGNE_OFFSET UNITYSDK_OFFSET(0xC1FE920)
#define MIADGHGEBPJ_OOENBABOOMK_OFFSET UNITYSDK_OFFSET(0xC1EDE90)
#define MIADGHGEBPJ_PKDJLGFKJKM_OFFSET UNITYSDK_OFFSET(0xC1FF290)

inline static constexpr unsigned int MIADGHGEBPJ_TypeDefinitionIndex = 58674;

	class MIADGHGEBPJ : public ::System::Object
	{
	public:
		::System::Collections::Generic::LinkedList_1<::System::Object*>* OMDOJLJEJEM; // 0x10
		::RPG::Client::TwoKeyDictionary_3<::System::Int32, ::System::Int32, ::System::Int32>* HFPAMFHJJMG; // 0x18
		::System::String* _UniqueName_k__BackingField; // 0x20
		::System::Collections::Generic::List_1<::KKPJOMHOLPJ*>* GFFAGJOELCH; // 0x28
		::System::Collections::Generic::LinkedList_1<::System::Object*>* NMHGPOINNDE; // 0x30
		::RPG::GameCore::GameEntity* CFKHNPGEAJA; // 0x38
		::MHHGNECMODJ* JHFKOHNKLMH; // 0x40
		::System::Single HBDJCFFDGDD; // 0x48
		::System::Single BDDGMAOMCPI; // 0x4C
		::System::Boolean DKLMKMCGGPC; // 0x50
		::System::Byte _padding0[0x3];
		::System::Single LAMPDMCDDLF; // 0x54
		::System::Single BPAIDCADMDO; // 0x58
		::System::Single FNKPBGKLFED; // 0x5C
		::System::Single BHHHGKKOFAK; // 0x60
		::System::Single IKPGEMHGIME; // 0x64
		::System::Single OIKOMNFPCDD; // 0x68
		::System::Single FGFCCDEBKJA; // 0x6C
		static ::Il2CppArray<::System::Int32>** StaticGet_EMFIHCCMNII()
		{
			return (::Il2CppArray<::System::Int32>**)UnitySDK::FromName("", "MIADGHGEBPJ")->GetStaticField(0x73440);
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
