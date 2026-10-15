#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BMDEEMIDNEL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class FieldCodec; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define BMDEEMIDNEL_BEGPKDAIOPO_OFFSET UNITYSDK_OFFSET(0x1E022E50)
#define BMDEEMIDNEL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E023290)
#define BMDEEMIDNEL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E023590)
#define BMDEEMIDNEL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E022E00)
#define BMDEEMIDNEL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E022D70)
#define BMDEEMIDNEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E022D20)
#define BMDEEMIDNEL_EPFPLLOFFFB_OFFSET UNITYSDK_OFFSET(0x1E022E40)
#define BMDEEMIDNEL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E022F60)
#define BMDEEMIDNEL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E022E60)
#define BMDEEMIDNEL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E023050)
#define BMDEEMIDNEL_HIIPMEICOGJ_OFFSET UNITYSDK_OFFSET(0x1E022E30)
#define BMDEEMIDNEL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E022CE0)
#define BMDEEMIDNEL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0233D0)
#define BMDEEMIDNEL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E023380)
#define BMDEEMIDNEL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E022D10)
#define BMDEEMIDNEL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E023150)
#define BMDEEMIDNEL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0231B0)

inline static constexpr unsigned int BMDEEMIDNEL_TypeDefinitionIndex = 30263;

	class BMDEEMIDNEL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EIIEGADIJJD; // 0x18
		::System::UInt32 ECCMJBDHOBD; // 0x20
		static ::Google::Protobuf::FieldCodec** StaticGet_HMPEFMDNHJB()
		{
			return (::Google::Protobuf::FieldCodec**)UnitySDK::FromName("", "BMDEEMIDNEL")->GetStaticField(0x4FF90);
		}

		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "BMDEEMIDNEL")->GetStaticField(0x4FF98);
		}

		// static const ::System::Object IHOMKIICBLP; // 0x0
		// static const ::System::Object CEDDGAMLKJK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDEEMIDNEL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::BMDEEMIDNEL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMDEEMIDNEL*))((::PBYTE)hIl2Cpp + BMDEEMIDNEL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BMDEEMIDNEL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + BMDEEMIDNEL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDEEMIDNEL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::BMDEEMIDNEL* Clone()
		{
			return ((::BMDEEMIDNEL*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDEEMIDNEL_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HIIPMEICOGJ()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDEEMIDNEL_HIIPMEICOGJ_OFFSET))(this);
		}

		::System::UInt32 EPFPLLOFFFB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDEEMIDNEL_EPFPLLOFFFB_OFFSET))(this);
		}

		::System::Void BEGPKDAIOPO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BMDEEMIDNEL_BEGPKDAIOPO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BMDEEMIDNEL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::BMDEEMIDNEL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BMDEEMIDNEL*))((::PBYTE)hIl2Cpp + BMDEEMIDNEL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDEEMIDNEL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDEEMIDNEL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + BMDEEMIDNEL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BMDEEMIDNEL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::BMDEEMIDNEL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BMDEEMIDNEL*))((::PBYTE)hIl2Cpp + BMDEEMIDNEL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + BMDEEMIDNEL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
