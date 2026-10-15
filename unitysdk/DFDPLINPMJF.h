#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CMIKEILGNGK;
class DFDPLINPMJF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DFDPLINPMJF_BOBNLLAEIBI_OFFSET UNITYSDK_OFFSET(0x1E170690)
#define DFDPLINPMJF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E170BD0)
#define DFDPLINPMJF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E171070)
#define DFDPLINPMJF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E170640)
#define DFDPLINPMJF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E170580)
#define DFDPLINPMJF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E170530)
#define DFDPLINPMJF_DOAGBBCMICH_OFFSET UNITYSDK_OFFSET(0x1E1706B0)
#define DFDPLINPMJF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E170870)
#define DFDPLINPMJF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1706E0)
#define DFDPLINPMJF_GDLLLIPJMDK_OFFSET UNITYSDK_OFFSET(0x1E1706C0)
#define DFDPLINPMJF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E1709A0)
#define DFDPLINPMJF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1704C0)
#define DFDPLINPMJF_KHCPLBLBOLE_OFFSET UNITYSDK_OFFSET(0x1E1706D0)
#define DFDPLINPMJF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E170E00)
#define DFDPLINPMJF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E170D50)
#define DFDPLINPMJF_MHMJAIBPIDI_OFFSET UNITYSDK_OFFSET(0x1E1706A0)
#define DFDPLINPMJF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E170520)
#define DFDPLINPMJF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E170A10)
#define DFDPLINPMJF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E170A70)

inline static constexpr unsigned int DFDPLINPMJF_TypeDefinitionIndex = 25572;

	class DFDPLINPMJF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::CMIKEILGNGK*>* MHDOFJEEDAJ; // 0x18
		::System::UInt32 NBJMCGAGAJF; // 0x20
		::System::UInt32 KPJHLPFOOOD; // 0x24
		static ::Google::Protobuf::MessageParser_1<::DFDPLINPMJF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DFDPLINPMJF*>**)UnitySDK::FromName("", "DFDPLINPMJF")->GetStaticField(0x2D420);
		}

		static ::Google::Protobuf::FieldCodec_1<::CMIKEILGNGK*>** StaticGet_EFCIBPBFFDN()
		{
			return (::Google::Protobuf::FieldCodec_1<::CMIKEILGNGK*>**)UnitySDK::FromName("", "DFDPLINPMJF")->GetStaticField(0x2D428);
		}

		// static const ::System::Object GFJHJBHJOLG; // 0x0
		// static const ::System::Object JMDDAAHKCOO; // 0x0
		// static const ::System::Object GMJBHBDLIMN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFDPLINPMJF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DFDPLINPMJF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFDPLINPMJF*))((::PBYTE)hIl2Cpp + DFDPLINPMJF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFDPLINPMJF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DFDPLINPMJF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DFDPLINPMJF*>*(*)())((::PBYTE)hIl2Cpp + DFDPLINPMJF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFDPLINPMJF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DFDPLINPMJF* Clone()
		{
			return ((::DFDPLINPMJF*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFDPLINPMJF_CLONE_OFFSET))(this);
		}

		::System::UInt32 BOBNLLAEIBI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFDPLINPMJF_BOBNLLAEIBI_OFFSET))(this);
		}

		::System::Void MHMJAIBPIDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DFDPLINPMJF_MHMJAIBPIDI_OFFSET))(this, a1);
		}

		::System::UInt32 DOAGBBCMICH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFDPLINPMJF_DOAGBBCMICH_OFFSET))(this);
		}

		::System::Void GDLLLIPJMDK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DFDPLINPMJF_GDLLLIPJMDK_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::CMIKEILGNGK*>* KHCPLBLBOLE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::CMIKEILGNGK*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFDPLINPMJF_KHCPLBLBOLE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DFDPLINPMJF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DFDPLINPMJF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DFDPLINPMJF*))((::PBYTE)hIl2Cpp + DFDPLINPMJF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFDPLINPMJF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFDPLINPMJF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DFDPLINPMJF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFDPLINPMJF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DFDPLINPMJF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFDPLINPMJF*))((::PBYTE)hIl2Cpp + DFDPLINPMJF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DFDPLINPMJF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
