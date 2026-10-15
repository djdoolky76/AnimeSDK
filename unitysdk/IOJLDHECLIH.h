#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IOJLDHECLIH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IOJLDHECLIH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6AA980)
#define IOJLDHECLIH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6AACA0)
#define IOJLDHECLIH_CLAGJKAIHNA_OFFSET UNITYSDK_OFFSET(0x1E6AA610)
#define IOJLDHECLIH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6AA560)
#define IOJLDHECLIH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6AA520)
#define IOJLDHECLIH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6AA510)
#define IOJLDHECLIH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6AA730)
#define IOJLDHECLIH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6AA620)
#define IOJLDHECLIH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6AA800)
#define IOJLDHECLIH_IMEFPLPNKBK_OFFSET UNITYSDK_OFFSET(0x1E6AA600)
#define IOJLDHECLIH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6AA4A0)
#define IOJLDHECLIH_KFFMBNFGJOB_OFFSET UNITYSDK_OFFSET(0x1E6AA5F0)
#define IOJLDHECLIH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6AAB20)
#define IOJLDHECLIH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6AAAE0)
#define IOJLDHECLIH_OLEJNDFFHPP_OFFSET UNITYSDK_OFFSET(0x1E6AA5E0)
#define IOJLDHECLIH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6AA500)
#define IOJLDHECLIH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6AA840)
#define IOJLDHECLIH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6AA8A0)

inline static constexpr unsigned int IOJLDHECLIH_TypeDefinitionIndex = 34850;

	class IOJLDHECLIH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Int64 HHCEMNIBHIE; // 0x18
		::System::UInt32 AOOAEAADNGO; // 0x20
		static ::Google::Protobuf::MessageParser_1<::IOJLDHECLIH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IOJLDHECLIH*>**)UnitySDK::FromName("", "IOJLDHECLIH")->GetStaticField(0x54EA0);
		}

		// static const ::System::Object BDDGFOPHBML; // 0x0
		// static const ::System::Object EBDOFPJAANE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOJLDHECLIH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IOJLDHECLIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IOJLDHECLIH*))((::PBYTE)hIl2Cpp + IOJLDHECLIH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IOJLDHECLIH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IOJLDHECLIH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IOJLDHECLIH*>*(*)())((::PBYTE)hIl2Cpp + IOJLDHECLIH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOJLDHECLIH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IOJLDHECLIH* Clone()
		{
			return ((::IOJLDHECLIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOJLDHECLIH_CLONE_OFFSET))(this);
		}

		::System::Int64 OLEJNDFFHPP()
		{
			return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + IOJLDHECLIH_OLEJNDFFHPP_OFFSET))(this);
		}

		::System::Void KFFMBNFGJOB(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + IOJLDHECLIH_KFFMBNFGJOB_OFFSET))(this, a1);
		}

		::System::UInt32 IMEFPLPNKBK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IOJLDHECLIH_IMEFPLPNKBK_OFFSET))(this);
		}

		::System::Void CLAGJKAIHNA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + IOJLDHECLIH_CLAGJKAIHNA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IOJLDHECLIH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IOJLDHECLIH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IOJLDHECLIH*))((::PBYTE)hIl2Cpp + IOJLDHECLIH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IOJLDHECLIH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IOJLDHECLIH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IOJLDHECLIH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IOJLDHECLIH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IOJLDHECLIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IOJLDHECLIH*))((::PBYTE)hIl2Cpp + IOJLDHECLIH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IOJLDHECLIH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
