#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JMNAGCHOAKN;
namespace RPG::Client { class MonoEmoBlendShapesController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JMNAGCHOAKN_ANEDHKJABMN_OFFSET UNITYSDK_OFFSET(0xB272640)
#define JMNAGCHOAKN_CCTOR_OFFSET UNITYSDK_OFFSET(0xB273250)
#define JMNAGCHOAKN_CTOR_OFFSET UNITYSDK_OFFSET(0xB272DA0)
#define JMNAGCHOAKN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB273200)
#define JMNAGCHOAKN_EIMIIHEDKFM_OFFSET UNITYSDK_OFFSET(0xB272960)
#define JMNAGCHOAKN_EKFIEAALOFF_OFFSET UNITYSDK_OFFSET(0xB272A80)
#define JMNAGCHOAKN_GET_CONTROLLER_OFFSET UNITYSDK_OFFSET(0xB272610)
#define JMNAGCHOAKN_MNGGAOFNGIP_OFFSET UNITYSDK_OFFSET(0xB272890)
#define JMNAGCHOAKN_NBJHKGDALEE_OFFSET UNITYSDK_OFFSET(0xB2726C0)
#define JMNAGCHOAKN_NDFCJNAMFJG_OFFSET UNITYSDK_OFFSET(0xB2727A0)
#define JMNAGCHOAKN_NHIJFPLPFJI_OFFSET UNITYSDK_OFFSET(0xB273000)
#define JMNAGCHOAKN_NHONNHCIOOJ_OFFSET UNITYSDK_OFFSET(0xB272630)
#define JMNAGCHOAKN_PEFLJDOKOIL_OFFSET UNITYSDK_OFFSET(0xB2726D0)
#define JMNAGCHOAKN_SET_CONTROLLER_OFFSET UNITYSDK_OFFSET(0xB272620)

inline static constexpr unsigned int JMNAGCHOAKN_TypeDefinitionIndex = 71147;

	class JMNAGCHOAKN : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* BIOEMGDAOMM; // 0x10
		::RPG::Client::MonoEmoBlendShapesController* _Controller_k__BackingField; // 0x18
		::System::Single KJLHNBJMPDC; // 0x20
		::System::UInt32 DKLOGEOIHCJ; // 0x24
		::System::Boolean ADMEOMGNNDN; // 0x28
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_GMIODKLGJHD()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)UnitySDK::FromName("", "JMNAGCHOAKN")->GetStaticField(0x1F9D0);
		}

		static ::System::UInt32* StaticGet_LFKDNJKBIGP()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "JMNAGCHOAKN")->GetStaticField(0x7350);
		}

		::System::Void _ctor(::RPG::Client::MonoEmoBlendShapesController* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEmoBlendShapesController*, ::System::Single))((::PBYTE)hIl2Cpp + JMNAGCHOAKN_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMNAGCHOAKN_CCTOR_OFFSET))();
		}

		::RPG::Client::MonoEmoBlendShapesController* get_Controller()
		{
			return ((::RPG::Client::MonoEmoBlendShapesController*(*)(::PVOID))((::PBYTE)hIl2Cpp + JMNAGCHOAKN_GET_CONTROLLER_OFFSET))(this);
		}

		::System::Void set_Controller(::RPG::Client::MonoEmoBlendShapesController* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEmoBlendShapesController*))((::PBYTE)hIl2Cpp + JMNAGCHOAKN_SET_CONTROLLER_OFFSET))(this, a1);
		}

		::System::Single NHONNHCIOOJ()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JMNAGCHOAKN_NHONNHCIOOJ_OFFSET))(this);
		}

		::System::Void ANEDHKJABMN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JMNAGCHOAKN_ANEDHKJABMN_OFFSET))(this, a1);
		}

		::System::Boolean NBJHKGDALEE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JMNAGCHOAKN_NBJHKGDALEE_OFFSET))(this);
		}

		::System::Single PEFLJDOKOIL(::System::String* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JMNAGCHOAKN_PEFLJDOKOIL_OFFSET))(this, a1);
		}

		::System::Void NDFCJNAMFJG(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + JMNAGCHOAKN_NDFCJNAMFJG_OFFSET))(this, a1, a2);
		}

		::System::Single MNGGAOFNGIP(::System::String* a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JMNAGCHOAKN_MNGGAOFNGIP_OFFSET))(this, a1);
		}

		::System::Void EIMIIHEDKFM(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + JMNAGCHOAKN_EIMIIHEDKFM_OFFSET))(this, a1, a2);
		}

		::System::Void EKFIEAALOFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMNAGCHOAKN_EKFIEAALOFF_OFFSET))(this);
		}

		::System::Void NHIJFPLPFJI(::JMNAGCHOAKN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JMNAGCHOAKN*))((::PBYTE)hIl2Cpp + JMNAGCHOAKN_NHIJFPLPFJI_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMNAGCHOAKN_DISPOSE_OFFSET))(this);
		}

	};
