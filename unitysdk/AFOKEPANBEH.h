#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFOKEPANBEH;
class CEKMLMOCLHF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AFOKEPANBEH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0EEED0)
#define AFOKEPANBEH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0EF250)
#define AFOKEPANBEH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0EEA10)
#define AFOKEPANBEH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0EE950)
#define AFOKEPANBEH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0EE900)
#define AFOKEPANBEH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0EEBC0)
#define AFOKEPANBEH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0EEA70)
#define AFOKEPANBEH_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E0EEA50)
#define AFOKEPANBEH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0EECF0)
#define AFOKEPANBEH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0EE8C0)
#define AFOKEPANBEH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0EF080)
#define AFOKEPANBEH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0EEFE0)
#define AFOKEPANBEH_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E0EEA40)
#define AFOKEPANBEH_OCIMPGDKAHA_OFFSET UNITYSDK_OFFSET(0x1E0EEA60)
#define AFOKEPANBEH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0EE8F0)
#define AFOKEPANBEH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0EED60)
#define AFOKEPANBEH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0EEDC0)

inline static constexpr unsigned int AFOKEPANBEH_TypeDefinitionIndex = 28046;

	class AFOKEPANBEH : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::CEKMLMOCLHF*>* LABFBJCODCC; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::CEKMLMOCLHF*>** StaticGet_JHGAOMOGPKH()
		{
			return (::Google::Protobuf::FieldCodec_1<::CEKMLMOCLHF*>**)UnitySDK::FromName("", "AFOKEPANBEH")->GetStaticField(0x359E0);
		}

		static ::Google::Protobuf::MessageParser_1<::AFOKEPANBEH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AFOKEPANBEH*>**)UnitySDK::FromName("", "AFOKEPANBEH")->GetStaticField(0x359E8);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object LKAJMFONLEE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFOKEPANBEH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AFOKEPANBEH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AFOKEPANBEH*))((::PBYTE)hIl2Cpp + AFOKEPANBEH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AFOKEPANBEH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AFOKEPANBEH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AFOKEPANBEH*>*(*)())((::PBYTE)hIl2Cpp + AFOKEPANBEH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFOKEPANBEH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AFOKEPANBEH* Clone()
		{
			return ((::AFOKEPANBEH*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFOKEPANBEH_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFOKEPANBEH_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AFOKEPANBEH_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::CEKMLMOCLHF*>* OCIMPGDKAHA()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::CEKMLMOCLHF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFOKEPANBEH_OCIMPGDKAHA_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AFOKEPANBEH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AFOKEPANBEH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AFOKEPANBEH*))((::PBYTE)hIl2Cpp + AFOKEPANBEH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFOKEPANBEH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFOKEPANBEH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AFOKEPANBEH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFOKEPANBEH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AFOKEPANBEH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AFOKEPANBEH*))((::PBYTE)hIl2Cpp + AFOKEPANBEH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AFOKEPANBEH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
