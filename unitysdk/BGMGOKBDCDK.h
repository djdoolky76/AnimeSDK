#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ServerPrefsType.h"
#include "unitysdk/System/Object.h"
class BGMGOKBDCDK;
class FCOEMCEDLNL;
namespace Google::Protobuf { class ByteString; }
namespace System { class String; }
namespace System { class Type; }
namespace System { template <typename T> class Action_1; }

#define BGMGOKBDCDK_CIHFGJDCHIA_OFFSET UNITYSDK_OFFSET(0xB18B250)
#define BGMGOKBDCDK_CTOR_OFFSET UNITYSDK_OFFSET(0xB18AF50)
#define BGMGOKBDCDK_EEMIMDNHKDA_OFFSET UNITYSDK_OFFSET(0xB18AF00)
#define BGMGOKBDCDK_EKFEBJHOMAB_OFFSET UNITYSDK_OFFSET(0xB18B760)
#define BGMGOKBDCDK_FAEEPJGMLDL_OFFSET UNITYSDK_OFFSET(0xB18B050)
#define BGMGOKBDCDK_FEOIACKPMNK_OFFSET UNITYSDK_OFFSET(0xB18B500)
#define BGMGOKBDCDK_GET_ISDIRTY_OFFSET UNITYSDK_OFFSET(0xB18AEE0)
#define BGMGOKBDCDK_ICCOMGBIMHD_OFFSET UNITYSDK_OFFSET(0xB18B160)
#define BGMGOKBDCDK_OBMHAOFAMJL_OFFSET UNITYSDK_OFFSET(0xB18B7A0)
#define BGMGOKBDCDK_PJPFIHFAHGO_OFFSET UNITYSDK_OFFSET(0xB18B6D0)
#define BGMGOKBDCDK_SET_ISDIRTY_OFFSET UNITYSDK_OFFSET(0xB18AEF0)

inline static constexpr unsigned int BGMGOKBDCDK_TypeDefinitionIndex = 67912;

	class BGMGOKBDCDK : public ::System::Object
	{
	public:
		::System::String* OENAMINOLLF; // 0x10
		::FCOEMCEDLNL* EFLEBLIIHEJ; // 0x18
		::System::Type* LKMFFKJHIAE; // 0x20
		::System::UInt32 MJPHEEFHDII; // 0x28
		::RPG::GameCore::ServerPrefsType OEOFJBLFMJP; // 0x2C
		::System::Boolean _IsDirty_k__BackingField; // 0x30
		::System::Byte _padding0[0x3];
		::System::UInt32 OGAGIKLCGPL; // 0x34
		static ::System::Action_1<::BGMGOKBDCDK*>** StaticGet_OFPDBJCHGIM()
		{
			return (::System::Action_1<::BGMGOKBDCDK*>**)UnitySDK::FromName("", "BGMGOKBDCDK")->GetStaticField(0x6A750);
		}

		::System::Void _ctor(::RPG::GameCore::ServerPrefsType a1, ::System::Type* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ServerPrefsType, ::System::Type*, ::System::UInt32))((::PBYTE)hIl2Cpp + BGMGOKBDCDK_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean get_IsDirty()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BGMGOKBDCDK_GET_ISDIRTY_OFFSET))(this);
		}

		::System::Void set_IsDirty(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BGMGOKBDCDK_SET_ISDIRTY_OFFSET))(this, a1);
		}

		::System::Int32 EEMIMDNHKDA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BGMGOKBDCDK_EEMIMDNHKDA_OFFSET))(this);
		}

		::System::Void FAEEPJGMLDL(::Google::Protobuf::ByteString* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::ByteString*))((::PBYTE)hIl2Cpp + BGMGOKBDCDK_FAEEPJGMLDL_OFFSET))(this, a1);
		}

		::System::Void ICCOMGBIMHD(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + BGMGOKBDCDK_ICCOMGBIMHD_OFFSET))(this, a1);
		}

		::System::Void CIHFGJDCHIA(::FCOEMCEDLNL* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::FCOEMCEDLNL*, ::System::Boolean))((::PBYTE)hIl2Cpp + BGMGOKBDCDK_CIHFGJDCHIA_OFFSET))(this, a1, a2);
		}

		::Google::Protobuf::ByteString* FEOIACKPMNK()
		{
			return ((::Google::Protobuf::ByteString*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGMGOKBDCDK_FEOIACKPMNK_OFFSET))(this);
		}

		::System::Void PJPFIHFAHGO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BGMGOKBDCDK_PJPFIHFAHGO_OFFSET))(this, a1);
		}

		::System::Void EKFEBJHOMAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGMGOKBDCDK_EKFEBJHOMAB_OFFSET))(this);
		}

		static ::System::Void OBMHAOFAMJL(::System::Action_1<::BGMGOKBDCDK*>* a1)
		{
			return ((::System::Void(*)(::System::Action_1<::BGMGOKBDCDK*>*))((::PBYTE)hIl2Cpp + BGMGOKBDCDK_OBMHAOFAMJL_OFFSET))(a1);
		}

	};
