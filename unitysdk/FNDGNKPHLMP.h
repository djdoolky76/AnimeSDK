#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CLPENACKJJE;
class FNDGNKPHLMP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FNDGNKPHLMP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3ED220)
#define FNDGNKPHLMP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3ED580)
#define FNDGNKPHLMP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3ECD10)
#define FNDGNKPHLMP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3ECC50)
#define FNDGNKPHLMP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3ECC00)
#define FNDGNKPHLMP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3ECF20)
#define FNDGNKPHLMP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3ECD90)
#define FNDGNKPHLMP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3ED050)
#define FNDGNKPHLMP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3ECB90)
#define FNDGNKPHLMP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3ED3B0)
#define FNDGNKPHLMP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3ED330)
#define FNDGNKPHLMP_MJDPPNEAJLJ_OFFSET UNITYSDK_OFFSET(0x1E3ECD70)
#define FNDGNKPHLMP_ODFJCCLFJNF_OFFSET UNITYSDK_OFFSET(0x1E3ECD80)
#define FNDGNKPHLMP_OEPKAHAFNII_OFFSET UNITYSDK_OFFSET(0x1E3ECD60)
#define FNDGNKPHLMP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3ECBF0)
#define FNDGNKPHLMP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3ED0C0)
#define FNDGNKPHLMP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3ED120)

inline static constexpr unsigned int FNDGNKPHLMP_TypeDefinitionIndex = 25509;

	class FNDGNKPHLMP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::CLPENACKJJE*>* BFEOPMGKICK; // 0x18
		::System::UInt32 KHHCAFOELCE; // 0x20
		static ::Google::Protobuf::MessageParser_1<::FNDGNKPHLMP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FNDGNKPHLMP*>**)UnitySDK::FromName("", "FNDGNKPHLMP")->GetStaticField(0x650E0);
		}

		static ::System::Object** StaticGet_HKOMKMGHLIO()
		{
			return (::System::Object**)UnitySDK::FromName("", "FNDGNKPHLMP")->GetStaticField(0x650E8);
		}

		// static const ::System::Object NNLNGBLDKOD; // 0x0
		// static const ::System::Object BNDFLMPFBCL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNDGNKPHLMP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FNDGNKPHLMP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FNDGNKPHLMP*))((::PBYTE)hIl2Cpp + FNDGNKPHLMP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNDGNKPHLMP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FNDGNKPHLMP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FNDGNKPHLMP*>*(*)())((::PBYTE)hIl2Cpp + FNDGNKPHLMP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNDGNKPHLMP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FNDGNKPHLMP* Clone()
		{
			return ((::FNDGNKPHLMP*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNDGNKPHLMP_CLONE_OFFSET))(this);
		}

		::System::UInt32 OEPKAHAFNII()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNDGNKPHLMP_OEPKAHAFNII_OFFSET))(this);
		}

		::System::Void MJDPPNEAJLJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FNDGNKPHLMP_MJDPPNEAJLJ_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::CLPENACKJJE*>* ODFJCCLFJNF()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::CLPENACKJJE*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNDGNKPHLMP_ODFJCCLFJNF_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FNDGNKPHLMP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FNDGNKPHLMP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FNDGNKPHLMP*))((::PBYTE)hIl2Cpp + FNDGNKPHLMP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNDGNKPHLMP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNDGNKPHLMP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FNDGNKPHLMP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNDGNKPHLMP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FNDGNKPHLMP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FNDGNKPHLMP*))((::PBYTE)hIl2Cpp + FNDGNKPHLMP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FNDGNKPHLMP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
