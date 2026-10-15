#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DNLKMHLAPHC;
class GNGIHJIJGMD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GNGIHJIJGMD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4DF430)
#define GNGIHJIJGMD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4DF750)
#define GNGIHJIJGMD_CLONE_OFFSET UNITYSDK_OFFSET(0x1E4DEE10)
#define GNGIHJIJGMD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4DEDA0)
#define GNGIHJIJGMD_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4DED90)
#define GNGIHJIJGMD_DGKGBNOFBKP_OFFSET UNITYSDK_OFFSET(0x1E4DEE90)
#define GNGIHJIJGMD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4DF020)
#define GNGIHJIJGMD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4DEEB0)
#define GNGIHJIJGMD_FBLCOCCHDCN_OFFSET UNITYSDK_OFFSET(0x1E4DEEA0)
#define GNGIHJIJGMD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4DF2F0)
#define GNGIHJIJGMD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E4DED50)
#define GNGIHJIJGMD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4DF560)
#define GNGIHJIJGMD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4DF490)
#define GNGIHJIJGMD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4DED80)
#define GNGIHJIJGMD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4DF340)
#define GNGIHJIJGMD_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4DF3A0)

inline static constexpr unsigned int GNGIHJIJGMD_TypeDefinitionIndex = 33079;

	class GNGIHJIJGMD : public ::System::Object
	{
	public:
		::DNLKMHLAPHC* IMIONEEHMPB; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::GNGIHJIJGMD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GNGIHJIJGMD*>**)UnitySDK::FromName("", "GNGIHJIJGMD")->GetStaticField(0x232D0);
		}

		// static const ::System::Object PFDFBOCEDGD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNGIHJIJGMD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GNGIHJIJGMD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GNGIHJIJGMD*))((::PBYTE)hIl2Cpp + GNGIHJIJGMD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNGIHJIJGMD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GNGIHJIJGMD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GNGIHJIJGMD*>*(*)())((::PBYTE)hIl2Cpp + GNGIHJIJGMD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNGIHJIJGMD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GNGIHJIJGMD* Clone()
		{
			return ((::GNGIHJIJGMD*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNGIHJIJGMD_CLONE_OFFSET))(this);
		}

		::DNLKMHLAPHC* DGKGBNOFBKP()
		{
			return ((::DNLKMHLAPHC*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNGIHJIJGMD_DGKGBNOFBKP_OFFSET))(this);
		}

		::System::Void FBLCOCCHDCN(::DNLKMHLAPHC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DNLKMHLAPHC*))((::PBYTE)hIl2Cpp + GNGIHJIJGMD_FBLCOCCHDCN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GNGIHJIJGMD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GNGIHJIJGMD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GNGIHJIJGMD*))((::PBYTE)hIl2Cpp + GNGIHJIJGMD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNGIHJIJGMD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GNGIHJIJGMD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GNGIHJIJGMD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GNGIHJIJGMD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GNGIHJIJGMD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GNGIHJIJGMD*))((::PBYTE)hIl2Cpp + GNGIHJIJGMD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GNGIHJIJGMD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
