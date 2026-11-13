#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BPOKOPCGMAJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BPOKOPCGMAJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x20342030)
#define BPOKOPCGMAJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x20342270)
#define BPOKOPCGMAJ_CLONE_OFFSET UNITYSDK_OFFSET(0x20341C60)
#define BPOKOPCGMAJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20341C30)
#define BPOKOPCGMAJ_CTOR_OFFSET UNITYSDK_OFFSET(0x20341C20)
#define BPOKOPCGMAJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x20341D90)
#define BPOKOPCGMAJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x20341CC0)
#define BPOKOPCGMAJ_FJMIOKINEOI_OFFSET UNITYSDK_OFFSET(0x20341CB0)
#define BPOKOPCGMAJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20341F00)
#define BPOKOPCGMAJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x20341BE0)
#define BPOKOPCGMAJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x20342110)
#define BPOKOPCGMAJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x203420E0)
#define BPOKOPCGMAJ_NKBHOJIFPCC_OFFSET UNITYSDK_OFFSET(0x20341CA0)
#define BPOKOPCGMAJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x20341C10)
#define BPOKOPCGMAJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20341F30)
#define BPOKOPCGMAJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x20341F90)

inline static constexpr unsigned int BPOKOPCGMAJ_TypeDefinitionIndex = 34186;

	class BPOKOPCGMAJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Int32 CDABGOFJLDH; // 0x18
		static ::Google::Protobuf::MessageParser_1<::BPOKOPCGMAJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::BPOKOPCGMAJ*>**)UnitySDK::FromName("", "BPOKOPCGMAJ")->GetStaticField(0x5EED0);
		}

		// static const ::System::Object HGCMOFKDEGH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPOKOPCGMAJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BPOKOPCGMAJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BPOKOPCGMAJ*))((::PBYTE)hIl2Cpp + BPOKOPCGMAJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BPOKOPCGMAJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::BPOKOPCGMAJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::BPOKOPCGMAJ*>*(*)())((::PBYTE)hIl2Cpp + BPOKOPCGMAJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPOKOPCGMAJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BPOKOPCGMAJ* Clone()
		{
			return ((::BPOKOPCGMAJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPOKOPCGMAJ_CLONE_OFFSET))(this);
		}

		::System::Int32 NKBHOJIFPCC()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPOKOPCGMAJ_NKBHOJIFPCC_OFFSET))(this);
		}

		::System::Void FJMIOKINEOI(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BPOKOPCGMAJ_FJMIOKINEOI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BPOKOPCGMAJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BPOKOPCGMAJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BPOKOPCGMAJ*))((::PBYTE)hIl2Cpp + BPOKOPCGMAJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPOKOPCGMAJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BPOKOPCGMAJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BPOKOPCGMAJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BPOKOPCGMAJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BPOKOPCGMAJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BPOKOPCGMAJ*))((::PBYTE)hIl2Cpp + BPOKOPCGMAJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BPOKOPCGMAJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
