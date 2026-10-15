#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBOAECKDKNN;
class JEGMGPOFHGG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EBOAECKDKNN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E245B70)
#define EBOAECKDKNN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E245E90)
#define EBOAECKDKNN_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2455E0)
#define EBOAECKDKNN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E245570)
#define EBOAECKDKNN_CTOR_OFFSET UNITYSDK_OFFSET(0x1E245560)
#define EBOAECKDKNN_DDGOALABGJE_OFFSET UNITYSDK_OFFSET(0x1E245690)
#define EBOAECKDKNN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E245820)
#define EBOAECKDKNN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2456A0)
#define EBOAECKDKNN_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E245670)
#define EBOAECKDKNN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2459A0)
#define EBOAECKDKNN_IMANPICJAHC_OFFSET UNITYSDK_OFFSET(0x1E245680)
#define EBOAECKDKNN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E245520)
#define EBOAECKDKNN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E245CD0)
#define EBOAECKDKNN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E245C40)
#define EBOAECKDKNN_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E245660)
#define EBOAECKDKNN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E245550)
#define EBOAECKDKNN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E245A30)
#define EBOAECKDKNN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E245A90)

inline static constexpr unsigned int EBOAECKDKNN_TypeDefinitionIndex = 26502;

	class EBOAECKDKNN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::JEGMGPOFHGG* OFPBAPDFGHJ; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::EBOAECKDKNN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::EBOAECKDKNN*>**)UnitySDK::FromName("", "EBOAECKDKNN")->GetStaticField(0x4C7A0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object EDEHHLINBGD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBOAECKDKNN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EBOAECKDKNN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EBOAECKDKNN*))((::PBYTE)hIl2Cpp + EBOAECKDKNN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBOAECKDKNN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::EBOAECKDKNN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::EBOAECKDKNN*>*(*)())((::PBYTE)hIl2Cpp + EBOAECKDKNN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBOAECKDKNN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EBOAECKDKNN* Clone()
		{
			return ((::EBOAECKDKNN*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBOAECKDKNN_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBOAECKDKNN_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EBOAECKDKNN_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::JEGMGPOFHGG* IMANPICJAHC()
		{
			return ((::JEGMGPOFHGG*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBOAECKDKNN_IMANPICJAHC_OFFSET))(this);
		}

		::System::Void DDGOALABGJE(::JEGMGPOFHGG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JEGMGPOFHGG*))((::PBYTE)hIl2Cpp + EBOAECKDKNN_DDGOALABGJE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EBOAECKDKNN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EBOAECKDKNN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EBOAECKDKNN*))((::PBYTE)hIl2Cpp + EBOAECKDKNN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBOAECKDKNN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBOAECKDKNN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EBOAECKDKNN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EBOAECKDKNN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EBOAECKDKNN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EBOAECKDKNN*))((::PBYTE)hIl2Cpp + EBOAECKDKNN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EBOAECKDKNN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
