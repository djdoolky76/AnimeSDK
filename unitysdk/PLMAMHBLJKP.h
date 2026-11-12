#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FJKMGCKMNNA;
class PLMAMHBLJKP;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PLMAMHBLJKP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F254AE0)
#define PLMAMHBLJKP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F254E20)
#define PLMAMHBLJKP_CLONE_OFFSET UNITYSDK_OFFSET(0x1F254510)
#define PLMAMHBLJKP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F254480)
#define PLMAMHBLJKP_CTOR_OFFSET UNITYSDK_OFFSET(0x1F254470)
#define PLMAMHBLJKP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F2547D0)
#define PLMAMHBLJKP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F254620)
#define PLMAMHBLJKP_FHGAPGHAPFH_OFFSET UNITYSDK_OFFSET(0x1F254610)
#define PLMAMHBLJKP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F254950)
#define PLMAMHBLJKP_GHJMLABOMJI_OFFSET UNITYSDK_OFFSET(0x1F2545E0)
#define PLMAMHBLJKP_IOIFPHAMFDF_OFFSET UNITYSDK_OFFSET(0x1F254600)
#define PLMAMHBLJKP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F254400)
#define PLMAMHBLJKP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F254C70)
#define PLMAMHBLJKP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F254BB0)
#define PLMAMHBLJKP_OLCBDMMJPON_OFFSET UNITYSDK_OFFSET(0x1F2545F0)
#define PLMAMHBLJKP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F254460)
#define PLMAMHBLJKP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F2549A0)
#define PLMAMHBLJKP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F254A00)

inline static constexpr unsigned int PLMAMHBLJKP_TypeDefinitionIndex = 28865;

	class PLMAMHBLJKP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::FJKMGCKMNNA* HDAIPLJBGAB; // 0x18
		::System::UInt32 IHHANCNMDMA; // 0x20
		static ::Google::Protobuf::MessageParser_1<::PLMAMHBLJKP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PLMAMHBLJKP*>**)UnitySDK::FromName("", "PLMAMHBLJKP")->GetStaticField(0x3D850);
		}

		// static const ::System::Object FCLKOFBAFMC; // 0x0
		// static const ::System::Object CGMFPGNNGEK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLMAMHBLJKP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PLMAMHBLJKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PLMAMHBLJKP*))((::PBYTE)hIl2Cpp + PLMAMHBLJKP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLMAMHBLJKP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PLMAMHBLJKP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PLMAMHBLJKP*>*(*)())((::PBYTE)hIl2Cpp + PLMAMHBLJKP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLMAMHBLJKP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PLMAMHBLJKP* Clone()
		{
			return ((::PLMAMHBLJKP*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLMAMHBLJKP_CLONE_OFFSET))(this);
		}

		::System::UInt32 GHJMLABOMJI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLMAMHBLJKP_GHJMLABOMJI_OFFSET))(this);
		}

		::System::Void OLCBDMMJPON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PLMAMHBLJKP_OLCBDMMJPON_OFFSET))(this, a1);
		}

		::FJKMGCKMNNA* IOIFPHAMFDF()
		{
			return ((::FJKMGCKMNNA*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLMAMHBLJKP_IOIFPHAMFDF_OFFSET))(this);
		}

		::System::Void FHGAPGHAPFH(::FJKMGCKMNNA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FJKMGCKMNNA*))((::PBYTE)hIl2Cpp + PLMAMHBLJKP_FHGAPGHAPFH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PLMAMHBLJKP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PLMAMHBLJKP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PLMAMHBLJKP*))((::PBYTE)hIl2Cpp + PLMAMHBLJKP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLMAMHBLJKP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLMAMHBLJKP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PLMAMHBLJKP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLMAMHBLJKP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PLMAMHBLJKP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PLMAMHBLJKP*))((::PBYTE)hIl2Cpp + PLMAMHBLJKP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PLMAMHBLJKP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
