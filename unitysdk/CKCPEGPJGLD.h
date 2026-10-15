#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CKCPEGPJGLD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CKCPEGPJGLD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0BBAB0)
#define CKCPEGPJGLD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0BBCD0)
#define CKCPEGPJGLD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0BB700)
#define CKCPEGPJGLD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0BB6D0)
#define CKCPEGPJGLD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0BB6C0)
#define CKCPEGPJGLD_EIOMMLPIAKP_OFFSET UNITYSDK_OFFSET(0x1E0BB740)
#define CKCPEGPJGLD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0BB830)
#define CKCPEGPJGLD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0BB760)
#define CKCPEGPJGLD_GEMDLCGEPMD_OFFSET UNITYSDK_OFFSET(0x1E0BB750)
#define CKCPEGPJGLD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0BB9A0)
#define CKCPEGPJGLD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0BB680)
#define CKCPEGPJGLD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0BBB70)
#define CKCPEGPJGLD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0BBB40)
#define CKCPEGPJGLD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0BB6B0)
#define CKCPEGPJGLD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0BB9D0)
#define CKCPEGPJGLD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0BBA30)

inline static constexpr unsigned int CKCPEGPJGLD_TypeDefinitionIndex = 32454;

	class CKCPEGPJGLD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GEMFJILOPLL; // 0x18
		static ::Google::Protobuf::MessageParser_1<::CKCPEGPJGLD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CKCPEGPJGLD*>**)UnitySDK::FromName("", "CKCPEGPJGLD")->GetStaticField(0x192E0);
		}

		// static const ::System::Object AKFFJEHMCCB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKCPEGPJGLD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CKCPEGPJGLD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CKCPEGPJGLD*))((::PBYTE)hIl2Cpp + CKCPEGPJGLD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CKCPEGPJGLD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CKCPEGPJGLD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CKCPEGPJGLD*>*(*)())((::PBYTE)hIl2Cpp + CKCPEGPJGLD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKCPEGPJGLD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CKCPEGPJGLD* Clone()
		{
			return ((::CKCPEGPJGLD*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKCPEGPJGLD_CLONE_OFFSET))(this);
		}

		::System::UInt32 EIOMMLPIAKP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKCPEGPJGLD_EIOMMLPIAKP_OFFSET))(this);
		}

		::System::Void GEMDLCGEPMD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CKCPEGPJGLD_GEMDLCGEPMD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CKCPEGPJGLD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CKCPEGPJGLD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CKCPEGPJGLD*))((::PBYTE)hIl2Cpp + CKCPEGPJGLD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKCPEGPJGLD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKCPEGPJGLD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CKCPEGPJGLD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKCPEGPJGLD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CKCPEGPJGLD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CKCPEGPJGLD*))((::PBYTE)hIl2Cpp + CKCPEGPJGLD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CKCPEGPJGLD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
