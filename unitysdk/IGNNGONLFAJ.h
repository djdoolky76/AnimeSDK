#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CBJGONHJAAC;
class IGNNGONLFAJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IGNNGONLFAJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E653760)
#define IGNNGONLFAJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E653A60)
#define IGNNGONLFAJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6532E0)
#define IGNNGONLFAJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E653230)
#define IGNNGONLFAJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6531E0)
#define IGNNGONLFAJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6534C0)
#define IGNNGONLFAJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E653340)
#define IGNNGONLFAJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6535E0)
#define IGNNGONLFAJ_ILEADNLDKCA_OFFSET UNITYSDK_OFFSET(0x1E653330)
#define IGNNGONLFAJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E653170)
#define IGNNGONLFAJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6538A0)
#define IGNNGONLFAJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E653800)
#define IGNNGONLFAJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6531D0)
#define IGNNGONLFAJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E653650)
#define IGNNGONLFAJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6536B0)

inline static constexpr unsigned int IGNNGONLFAJ_TypeDefinitionIndex = 34858;

	class IGNNGONLFAJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::CBJGONHJAAC*>* JFCEJBEJFHN; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::CBJGONHJAAC*>** StaticGet_LPLELAIIPCM()
		{
			return (::Google::Protobuf::FieldCodec_1<::CBJGONHJAAC*>**)UnitySDK::FromName("", "IGNNGONLFAJ")->GetStaticField(0x4BB30);
		}

		static ::Google::Protobuf::MessageParser_1<::IGNNGONLFAJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IGNNGONLFAJ*>**)UnitySDK::FromName("", "IGNNGONLFAJ")->GetStaticField(0x4BB38);
		}

		// static const ::System::Object EBFCBNGBCHN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGNNGONLFAJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IGNNGONLFAJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGNNGONLFAJ*))((::PBYTE)hIl2Cpp + IGNNGONLFAJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGNNGONLFAJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IGNNGONLFAJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IGNNGONLFAJ*>*(*)())((::PBYTE)hIl2Cpp + IGNNGONLFAJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGNNGONLFAJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IGNNGONLFAJ* Clone()
		{
			return ((::IGNNGONLFAJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGNNGONLFAJ_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::CBJGONHJAAC*>* ILEADNLDKCA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::CBJGONHJAAC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGNNGONLFAJ_ILEADNLDKCA_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IGNNGONLFAJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IGNNGONLFAJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IGNNGONLFAJ*))((::PBYTE)hIl2Cpp + IGNNGONLFAJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGNNGONLFAJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGNNGONLFAJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IGNNGONLFAJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGNNGONLFAJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IGNNGONLFAJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGNNGONLFAJ*))((::PBYTE)hIl2Cpp + IGNNGONLFAJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IGNNGONLFAJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
