#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CGCIGGBIGAL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define CGCIGGBIGAL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FD242D0)
#define CGCIGGBIGAL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD245A0)
#define CGCIGGBIGAL_CLONE_OFFSET UNITYSDK_OFFSET(0x1FD23ED0)
#define CGCIGGBIGAL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FD23EA0)
#define CGCIGGBIGAL_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD23E90)
#define CGCIGGBIGAL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FD24090)
#define CGCIGGBIGAL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FD23F80)
#define CGCIGGBIGAL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FD24160)
#define CGCIGGBIGAL_HMFNPMBDFNH_OFFSET UNITYSDK_OFFSET(0x1FD23F60)
#define CGCIGGBIGAL_JEHIDLFBCME_OFFSET UNITYSDK_OFFSET(0x1FD23F70)
#define CGCIGGBIGAL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FD23E20)
#define CGCIGGBIGAL_KLFBMJEDIBJ_OFFSET UNITYSDK_OFFSET(0x1FD23F40)
#define CGCIGGBIGAL_MCGPJHCNMFD_OFFSET UNITYSDK_OFFSET(0x1FD23F50)
#define CGCIGGBIGAL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FD24420)
#define CGCIGGBIGAL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FD243E0)
#define CGCIGGBIGAL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FD23E80)
#define CGCIGGBIGAL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FD24190)
#define CGCIGGBIGAL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FD241F0)

inline static constexpr unsigned int CGCIGGBIGAL_TypeDefinitionIndex = 26530;

	class CGCIGGBIGAL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 AEDNCLHDJLA; // 0x18
		::System::UInt32 FOBEDKHFIMO; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::CGCIGGBIGAL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::CGCIGGBIGAL*>**)UnitySDK::FromName("", "CGCIGGBIGAL")->GetStaticField(0xB9D0);
		}

		// static const ::System::Object CPPIDHNGANG; // 0x0
		// static const ::System::Object BJBLMLGFLGP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGCIGGBIGAL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::CGCIGGBIGAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CGCIGGBIGAL*))((::PBYTE)hIl2Cpp + CGCIGGBIGAL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CGCIGGBIGAL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::CGCIGGBIGAL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::CGCIGGBIGAL*>*(*)())((::PBYTE)hIl2Cpp + CGCIGGBIGAL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGCIGGBIGAL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::CGCIGGBIGAL* Clone()
		{
			return ((::CGCIGGBIGAL*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGCIGGBIGAL_CLONE_OFFSET))(this);
		}

		::System::UInt32 KLFBMJEDIBJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGCIGGBIGAL_KLFBMJEDIBJ_OFFSET))(this);
		}

		::System::Void MCGPJHCNMFD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CGCIGGBIGAL_MCGPJHCNMFD_OFFSET))(this, a1);
		}

		::System::UInt32 HMFNPMBDFNH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGCIGGBIGAL_HMFNPMBDFNH_OFFSET))(this);
		}

		::System::Void JEHIDLFBCME(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CGCIGGBIGAL_JEHIDLFBCME_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CGCIGGBIGAL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::CGCIGGBIGAL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CGCIGGBIGAL*))((::PBYTE)hIl2Cpp + CGCIGGBIGAL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGCIGGBIGAL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGCIGGBIGAL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + CGCIGGBIGAL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CGCIGGBIGAL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::CGCIGGBIGAL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CGCIGGBIGAL*))((::PBYTE)hIl2Cpp + CGCIGGBIGAL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + CGCIGGBIGAL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
