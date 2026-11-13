#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GCCIOBKOFJN;
class KJAMNOGFAMJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GCCIOBKOFJN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FC5AAE0)
#define GCCIOBKOFJN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC5AE50)
#define GCCIOBKOFJN_CLONE_OFFSET UNITYSDK_OFFSET(0x1FC5A630)
#define GCCIOBKOFJN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FC5A5A0)
#define GCCIOBKOFJN_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC5A560)
#define GCCIOBKOFJN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FC5A7E0)
#define GCCIOBKOFJN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FC5A690)
#define GCCIOBKOFJN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FC5A910)
#define GCCIOBKOFJN_GOLPFFCDICE_OFFSET UNITYSDK_OFFSET(0x1FC5A670)
#define GCCIOBKOFJN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FC5A520)
#define GCCIOBKOFJN_LFNDALDMEBL_OFFSET UNITYSDK_OFFSET(0x1FC5A680)
#define GCCIOBKOFJN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FC5AC90)
#define GCCIOBKOFJN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FC5ABF0)
#define GCCIOBKOFJN_OGMHHLBHKOF_OFFSET UNITYSDK_OFFSET(0x1FC5A660)
#define GCCIOBKOFJN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FC5A550)
#define GCCIOBKOFJN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FC5A980)
#define GCCIOBKOFJN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FC5A9E0)

inline static constexpr unsigned int GCCIOBKOFJN_TypeDefinitionIndex = 33757;

	class GCCIOBKOFJN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::KJAMNOGFAMJ*>* DPFGEMHEFAG; // 0x18
		::System::UInt32 JCGMPJONLCA; // 0x20
		static ::Google::Protobuf::MessageParser_1<::GCCIOBKOFJN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GCCIOBKOFJN*>**)UnitySDK::FromName("", "GCCIOBKOFJN")->GetStaticField(0x587F0);
		}

		static ::Google::Protobuf::FieldCodec_1<::KJAMNOGFAMJ*>** StaticGet_IGHMMIOFJDI()
		{
			return (::Google::Protobuf::FieldCodec_1<::KJAMNOGFAMJ*>**)UnitySDK::FromName("", "GCCIOBKOFJN")->GetStaticField(0x587F8);
		}

		// static const ::System::Object GAHLJEECCFB; // 0x0
		// static const ::System::Object OBBOOLBCHLI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCCIOBKOFJN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GCCIOBKOFJN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GCCIOBKOFJN*))((::PBYTE)hIl2Cpp + GCCIOBKOFJN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GCCIOBKOFJN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GCCIOBKOFJN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GCCIOBKOFJN*>*(*)())((::PBYTE)hIl2Cpp + GCCIOBKOFJN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCCIOBKOFJN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GCCIOBKOFJN* Clone()
		{
			return ((::GCCIOBKOFJN*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCCIOBKOFJN_CLONE_OFFSET))(this);
		}

		::System::UInt32 OGMHHLBHKOF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCCIOBKOFJN_OGMHHLBHKOF_OFFSET))(this);
		}

		::System::Void GOLPFFCDICE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GCCIOBKOFJN_GOLPFFCDICE_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::KJAMNOGFAMJ*>* LFNDALDMEBL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::KJAMNOGFAMJ*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCCIOBKOFJN_LFNDALDMEBL_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GCCIOBKOFJN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GCCIOBKOFJN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GCCIOBKOFJN*))((::PBYTE)hIl2Cpp + GCCIOBKOFJN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCCIOBKOFJN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GCCIOBKOFJN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GCCIOBKOFJN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GCCIOBKOFJN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GCCIOBKOFJN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GCCIOBKOFJN*))((::PBYTE)hIl2Cpp + GCCIOBKOFJN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GCCIOBKOFJN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
