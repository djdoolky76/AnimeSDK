#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EJKNEDLPMIB;
class GACKCPEPDAF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EJKNEDLPMIB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E28DDF0)
#define EJKNEDLPMIB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E28E150)
#define EJKNEDLPMIB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E28D7F0)
#define EJKNEDLPMIB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E28D750)
#define EJKNEDLPMIB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E28D740)
#define EJKNEDLPMIB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E28DAC0)
#define EJKNEDLPMIB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E28D910)
#define EJKNEDLPMIB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E28DC40)
#define EJKNEDLPMIB_IHAGPODLMEO_OFFSET UNITYSDK_OFFSET(0x1E28D8F0)
#define EJKNEDLPMIB_JGKHEAFJLOI_OFFSET UNITYSDK_OFFSET(0x1E28D8E0)
#define EJKNEDLPMIB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E28D6D0)
#define EJKNEDLPMIB_MAEMCJNKMOI_OFFSET UNITYSDK_OFFSET(0x1E28D8D0)
#define EJKNEDLPMIB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E28DFA0)
#define EJKNEDLPMIB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E28DEC0)
#define EJKNEDLPMIB_OFPNMJGABJG_OFFSET UNITYSDK_OFFSET(0x1E28D900)
#define EJKNEDLPMIB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E28D730)
#define EJKNEDLPMIB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E28DCB0)
#define EJKNEDLPMIB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E28DD10)

inline static constexpr unsigned int EJKNEDLPMIB_TypeDefinitionIndex = 27186;

	class EJKNEDLPMIB : public ::System::Object
	{
	public:
		::GACKCPEPDAF* NJEFEPDEGAK; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 BPHAEJMMPGF; // 0x20
		static ::Google::Protobuf::MessageParser_1<::EJKNEDLPMIB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EJKNEDLPMIB*>**)UnitySDK::FromName("", "EJKNEDLPMIB")->GetStaticField(0x4D070);
		}

		// static const ::System::Object OJBCBIEJBOJ; // 0x0
		// static const ::System::Object ECHFHDBNGBM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJKNEDLPMIB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EJKNEDLPMIB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EJKNEDLPMIB*))((::PBYTE)hIl2Cpp + EJKNEDLPMIB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJKNEDLPMIB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EJKNEDLPMIB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EJKNEDLPMIB*>*(*)())((::PBYTE)hIl2Cpp + EJKNEDLPMIB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJKNEDLPMIB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EJKNEDLPMIB* Clone()
		{
			return ((::EJKNEDLPMIB*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJKNEDLPMIB_CLONE_OFFSET))(this);
		}

		::System::UInt32 MAEMCJNKMOI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJKNEDLPMIB_MAEMCJNKMOI_OFFSET))(this);
		}

		::System::Void JGKHEAFJLOI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EJKNEDLPMIB_JGKHEAFJLOI_OFFSET))(this, a1);
		}

		::GACKCPEPDAF* IHAGPODLMEO()
		{
			return ((::GACKCPEPDAF*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJKNEDLPMIB_IHAGPODLMEO_OFFSET))(this);
		}

		::System::Void OFPNMJGABJG(::GACKCPEPDAF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GACKCPEPDAF*))((::PBYTE)hIl2Cpp + EJKNEDLPMIB_OFPNMJGABJG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EJKNEDLPMIB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EJKNEDLPMIB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EJKNEDLPMIB*))((::PBYTE)hIl2Cpp + EJKNEDLPMIB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJKNEDLPMIB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJKNEDLPMIB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EJKNEDLPMIB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJKNEDLPMIB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EJKNEDLPMIB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EJKNEDLPMIB*))((::PBYTE)hIl2Cpp + EJKNEDLPMIB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EJKNEDLPMIB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
