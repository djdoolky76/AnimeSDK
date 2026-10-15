#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CAGKEDMHEOI;
class OMNMBANDCBA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T1, typename T2> class MapField_2; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OMNMBANDCBA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DE8FE90)
#define OMNMBANDCBA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DE902A0)
#define OMNMBANDCBA_CLONE_OFFSET UNITYSDK_OFFSET(0x1DE8F870)
#define OMNMBANDCBA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DE8F7D0)
#define OMNMBANDCBA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE8F7A0)
#define OMNMBANDCBA_DGLPOFNPOLJ_OFFSET UNITYSDK_OFFSET(0x1DE8F8D0)
#define OMNMBANDCBA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DE8F9F0)
#define OMNMBANDCBA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DE8F930)
#define OMNMBANDCBA_FDEINBAOHMP_OFFSET UNITYSDK_OFFSET(0x1DE8F8C0)
#define OMNMBANDCBA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DE8FBB0)
#define OMNMBANDCBA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DE8F730)
#define OMNMBANDCBA_JKLFJNBLIFP_OFFSET UNITYSDK_OFFSET(0x1DE8F8F0)
#define OMNMBANDCBA_JOJCPNIDHME_OFFSET UNITYSDK_OFFSET(0x1DE8F8E0)
#define OMNMBANDCBA_MCOODDIIOIH_OFFSET UNITYSDK_OFFSET(0x1DE8F910)
#define OMNMBANDCBA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DE90150)
#define OMNMBANDCBA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DE90090)
#define OMNMBANDCBA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DE8F790)
#define OMNMBANDCBA_PEAHKMLHLLP_OFFSET UNITYSDK_OFFSET(0x1DE8F900)
#define OMNMBANDCBA_PMODGCHEFJC_OFFSET UNITYSDK_OFFSET(0x1DE8F920)
#define OMNMBANDCBA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DE8FC60)
#define OMNMBANDCBA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DE8FCC0)

inline static constexpr unsigned int OMNMBANDCBA_TypeDefinitionIndex = 33311;

	class OMNMBANDCBA : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Boolean>* MNBPEAHFFID; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::CAGKEDMHEOI* IPBMAGNJAML; // 0x20
		::System::UInt32 AOEIAMDAOFJ; // 0x28
		::System::Int32 FPIMLCPDEDO; // 0x2C
		static ::System::Object** StaticGet_EFFGGMOINNO()
		{
			return (::System::Object**)UnitySDK::FromName("", "OMNMBANDCBA")->GetStaticField(0x23660);
		}

		static ::Google::Protobuf::MessageParser_1<::OMNMBANDCBA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OMNMBANDCBA*>**)UnitySDK::FromName("", "OMNMBANDCBA")->GetStaticField(0x23668);
		}

		// static const ::System::Object NDPABJNNCEJ; // 0x0
		// static const ::System::Object GFIEIDLEHFA; // 0x0
		// static const ::System::Object BPBHPAOICKE; // 0x0
		// static const ::System::Object NGPKIDLBPIA; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMNMBANDCBA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OMNMBANDCBA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMNMBANDCBA*))((::PBYTE)hIl2Cpp + OMNMBANDCBA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OMNMBANDCBA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OMNMBANDCBA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OMNMBANDCBA*>*(*)())((::PBYTE)hIl2Cpp + OMNMBANDCBA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMNMBANDCBA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OMNMBANDCBA* Clone()
		{
			return ((::OMNMBANDCBA*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMNMBANDCBA_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Boolean>* FDEINBAOHMP()
		{
			return ((::Google::Protobuf::Collections::MapField_2<::System::UInt32, ::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMNMBANDCBA_FDEINBAOHMP_OFFSET))(this);
		}

		::System::UInt32 DGLPOFNPOLJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMNMBANDCBA_DGLPOFNPOLJ_OFFSET))(this);
		}

		::System::Void JOJCPNIDHME(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OMNMBANDCBA_JOJCPNIDHME_OFFSET))(this, a1);
		}

		::System::Int32 JKLFJNBLIFP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMNMBANDCBA_JKLFJNBLIFP_OFFSET))(this);
		}

		::System::Void PEAHKMLHLLP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OMNMBANDCBA_PEAHKMLHLLP_OFFSET))(this, a1);
		}

		::CAGKEDMHEOI* MCOODDIIOIH()
		{
			return ((::CAGKEDMHEOI*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMNMBANDCBA_MCOODDIIOIH_OFFSET))(this);
		}

		::System::Void PMODGCHEFJC(::CAGKEDMHEOI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CAGKEDMHEOI*))((::PBYTE)hIl2Cpp + OMNMBANDCBA_PMODGCHEFJC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OMNMBANDCBA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OMNMBANDCBA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OMNMBANDCBA*))((::PBYTE)hIl2Cpp + OMNMBANDCBA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMNMBANDCBA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OMNMBANDCBA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OMNMBANDCBA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OMNMBANDCBA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OMNMBANDCBA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMNMBANDCBA*))((::PBYTE)hIl2Cpp + OMNMBANDCBA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OMNMBANDCBA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
