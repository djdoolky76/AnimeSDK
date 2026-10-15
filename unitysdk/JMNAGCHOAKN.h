#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JMNAGCHOAKN;
namespace RPG::Client { class MonoEmoBlendShapesController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JMNAGCHOAKN_ANEDHKJABMN_OFFSET UNITYSDK_OFFSET(0xB26C210)
#define JMNAGCHOAKN_CCTOR_OFFSET UNITYSDK_OFFSET(0xB26CE20)
#define JMNAGCHOAKN_CTOR_OFFSET UNITYSDK_OFFSET(0xB26C970)
#define JMNAGCHOAKN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB26CDD0)
#define JMNAGCHOAKN_EIMIIHEDKFM_OFFSET UNITYSDK_OFFSET(0xB26C530)
#define JMNAGCHOAKN_EKFIEAALOFF_OFFSET UNITYSDK_OFFSET(0xB26C650)
#define JMNAGCHOAKN_GET_CONTROLLER_OFFSET UNITYSDK_OFFSET(0xB26C1E0)
#define JMNAGCHOAKN_MNGGAOFNGIP_OFFSET UNITYSDK_OFFSET(0xB26C460)
#define JMNAGCHOAKN_NBJHKGDALEE_OFFSET UNITYSDK_OFFSET(0xB26C290)
#define JMNAGCHOAKN_NDFCJNAMFJG_OFFSET UNITYSDK_OFFSET(0xB26C370)
#define JMNAGCHOAKN_NHIJFPLPFJI_OFFSET UNITYSDK_OFFSET(0xB26CBD0)
#define JMNAGCHOAKN_NHONNHCIOOJ_OFFSET UNITYSDK_OFFSET(0xB26C200)
#define JMNAGCHOAKN_PEFLJDOKOIL_OFFSET UNITYSDK_OFFSET(0xB26C2A0)
#define JMNAGCHOAKN_SET_CONTROLLER_OFFSET UNITYSDK_OFFSET(0xB26C1F0)

inline static constexpr unsigned int JMNAGCHOAKN_TypeDefinitionIndex = 71147;

	class JMNAGCHOAKN : public ::System::Object
	{
	public:
		::RPG::Client::MonoEmoBlendShapesController* _Controller_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* BIOEMGDAOMM; // 0x18
		::System::Single KJLHNBJMPDC; // 0x20
		::System::Boolean ADMEOMGNNDN; // 0x24
		::System::Byte _padding0[0x3];
		::System::UInt32 DKLOGEOIHCJ; // 0x28
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_GMIODKLGJHD()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)UnitySDK::FromName("", "JMNAGCHOAKN")->GetStaticField(0x20C60);
		}

		static ::System::UInt32* StaticGet_LFKDNJKBIGP()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "JMNAGCHOAKN")->GetStaticField(0x74F0);
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
