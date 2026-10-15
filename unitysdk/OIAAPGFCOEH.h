#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OIAAPGFCOEH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OIAAPGFCOEH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE683F0)
#define OIAAPGFCOEH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE68690)
#define OIAAPGFCOEH_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE67F60)
#define OIAAPGFCOEH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE67EC0)
#define OIAAPGFCOEH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE67E70)
#define OIAAPGFCOEH_DPFLPFADJNK_OFFSET UNITYSDK_OFFSET(0x1DE67FA0)
#define OIAAPGFCOEH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE68060)
#define OIAAPGFCOEH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE67FE0)
#define OIAAPGFCOEH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE68160)
#define OIAAPGFCOEH_GGAEMPLONAL_OFFSET UNITYSDK_OFFSET(0x1DE67FD0)
#define OIAAPGFCOEH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE67E30)
#define OIAAPGFCOEH_JKLDHNNGNCK_OFFSET UNITYSDK_OFFSET(0x1DE67F90)
#define OIAAPGFCOEH_MDCPLOEONPG_OFFSET UNITYSDK_OFFSET(0x1DE67FB0)
#define OIAAPGFCOEH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE685C0)
#define OIAAPGFCOEH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE68560)
#define OIAAPGFCOEH_NHNDECGBGDB_OFFSET UNITYSDK_OFFSET(0x1DE67FC0)
#define OIAAPGFCOEH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE67E60)
#define OIAAPGFCOEH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE68260)
#define OIAAPGFCOEH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE682C0)

inline static constexpr unsigned int OIAAPGFCOEH_TypeDefinitionIndex = 26890;

	class OIAAPGFCOEH : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* ANLOFEJACIF; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 DOIBANHCIIN; // 0x20
		::System::UInt32 IDPMGABNGKO; // 0x24
		static ::Google::Protobuf::MessageParser_1<::OIAAPGFCOEH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OIAAPGFCOEH*>**)UnitySDK::FromName("", "OIAAPGFCOEH")->GetStaticField(0x1B8F0);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_KCAPMKNIJLM()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "OIAAPGFCOEH")->GetStaticField(0x1B8F8);
		}

		// static const ::System::Object OOGKNMKNJNI; // 0x0
		// static const ::System::Object EPOLDFHNNFN; // 0x0
		// static const ::System::Object MBHJFIABOFK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OIAAPGFCOEH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OIAAPGFCOEH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIAAPGFCOEH*))((::PBYTE)hIl2Cpp + OIAAPGFCOEH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OIAAPGFCOEH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OIAAPGFCOEH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OIAAPGFCOEH*>*(*)())((::PBYTE)hIl2Cpp + OIAAPGFCOEH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIAAPGFCOEH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OIAAPGFCOEH* Clone()
		{
			return ((::OIAAPGFCOEH*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIAAPGFCOEH_CLONE_OFFSET))(this);
		}

		::System::UInt32 JKLDHNNGNCK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIAAPGFCOEH_JKLDHNNGNCK_OFFSET))(this);
		}

		::System::Void DPFLPFADJNK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OIAAPGFCOEH_DPFLPFADJNK_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* MDCPLOEONPG()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIAAPGFCOEH_MDCPLOEONPG_OFFSET))(this);
		}

		::System::UInt32 NHNDECGBGDB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIAAPGFCOEH_NHNDECGBGDB_OFFSET))(this);
		}

		::System::Void GGAEMPLONAL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OIAAPGFCOEH_GGAEMPLONAL_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OIAAPGFCOEH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OIAAPGFCOEH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OIAAPGFCOEH*))((::PBYTE)hIl2Cpp + OIAAPGFCOEH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIAAPGFCOEH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OIAAPGFCOEH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OIAAPGFCOEH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OIAAPGFCOEH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OIAAPGFCOEH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OIAAPGFCOEH*))((::PBYTE)hIl2Cpp + OIAAPGFCOEH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OIAAPGFCOEH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
