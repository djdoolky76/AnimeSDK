#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DIFGGDIHDEG;
class KDNMOFGMMNP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KDNMOFGMMNP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7D8D10)
#define KDNMOFGMMNP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7D90B0)
#define KDNMOFGMMNP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7D8860)
#define KDNMOFGMMNP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7D87D0)
#define KDNMOFGMMNP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7D8790)
#define KDNMOFGMMNP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7D8A10)
#define KDNMOFGMMNP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7D88C0)
#define KDNMOFGMMNP_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E7D88B0)
#define KDNMOFGMMNP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7D8B30)
#define KDNMOFGMMNP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7D8750)
#define KDNMOFGMMNP_LMJMPEIBJLL_OFFSET UNITYSDK_OFFSET(0x1E7D8890)
#define KDNMOFGMMNP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7D8EE0)
#define KDNMOFGMMNP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7D8E40)
#define KDNMOFGMMNP_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E7D88A0)
#define KDNMOFGMMNP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7D8780)
#define KDNMOFGMMNP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7D8BA0)
#define KDNMOFGMMNP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7D8C00)

inline static constexpr unsigned int KDNMOFGMMNP_TypeDefinitionIndex = 33756;

	class KDNMOFGMMNP : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::DIFGGDIHDEG*>* PBHFMKKMNIG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::KDNMOFGMMNP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KDNMOFGMMNP*>**)UnitySDK::FromName("", "KDNMOFGMMNP")->GetStaticField(0x10D10);
		}

		static ::Google::Protobuf::FieldCodec_1<::DIFGGDIHDEG*>** StaticGet_KGKGNDMPGLP()
		{
			return (::Google::Protobuf::FieldCodec_1<::DIFGGDIHDEG*>**)UnitySDK::FromName("", "KDNMOFGMMNP")->GetStaticField(0x10D18);
		}

		// static const ::System::Object DELNAIGFHDI; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDNMOFGMMNP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KDNMOFGMMNP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KDNMOFGMMNP*))((::PBYTE)hIl2Cpp + KDNMOFGMMNP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDNMOFGMMNP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KDNMOFGMMNP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KDNMOFGMMNP*>*(*)())((::PBYTE)hIl2Cpp + KDNMOFGMMNP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDNMOFGMMNP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KDNMOFGMMNP* Clone()
		{
			return ((::KDNMOFGMMNP*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDNMOFGMMNP_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::DIFGGDIHDEG*>* LMJMPEIBJLL()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::DIFGGDIHDEG*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDNMOFGMMNP_LMJMPEIBJLL_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDNMOFGMMNP_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KDNMOFGMMNP_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KDNMOFGMMNP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KDNMOFGMMNP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KDNMOFGMMNP*))((::PBYTE)hIl2Cpp + KDNMOFGMMNP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDNMOFGMMNP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDNMOFGMMNP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KDNMOFGMMNP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KDNMOFGMMNP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KDNMOFGMMNP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KDNMOFGMMNP*))((::PBYTE)hIl2Cpp + KDNMOFGMMNP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KDNMOFGMMNP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
