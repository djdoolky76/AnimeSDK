#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LNCHJBMIMAF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LNCHJBMIMAF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E984770)
#define LNCHJBMIMAF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E984990)
#define LNCHJBMIMAF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E984360)
#define LNCHJBMIMAF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E984330)
#define LNCHJBMIMAF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E984320)
#define LNCHJBMIMAF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9844F0)
#define LNCHJBMIMAF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E9843F0)
#define LNCHJBMIMAF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E984660)
#define LNCHJBMIMAF_JGKKIODILCO_OFFSET UNITYSDK_OFFSET(0x1E9843D0)
#define LNCHJBMIMAF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E9842B0)
#define LNCHJBMIMAF_KAADEPADNMH_OFFSET UNITYSDK_OFFSET(0x1E9843E0)
#define LNCHJBMIMAF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E984830)
#define LNCHJBMIMAF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E984800)
#define LNCHJBMIMAF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E984310)
#define LNCHJBMIMAF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E984690)
#define LNCHJBMIMAF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E9846F0)

inline static constexpr unsigned int LNCHJBMIMAF_TypeDefinitionIndex = 31026;

	class LNCHJBMIMAF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KBBFPCGLDCN; // 0x18
		static ::Google::Protobuf::MessageParser_1<::LNCHJBMIMAF*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LNCHJBMIMAF*>**)UnitySDK::FromName("", "LNCHJBMIMAF")->GetStaticField(0x3FAE0);
		}

		// static const ::System::Object CLGAAGPCNGI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNCHJBMIMAF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LNCHJBMIMAF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNCHJBMIMAF*))((::PBYTE)hIl2Cpp + LNCHJBMIMAF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LNCHJBMIMAF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LNCHJBMIMAF*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LNCHJBMIMAF*>*(*)())((::PBYTE)hIl2Cpp + LNCHJBMIMAF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNCHJBMIMAF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LNCHJBMIMAF* Clone()
		{
			return ((::LNCHJBMIMAF*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNCHJBMIMAF_CLONE_OFFSET))(this);
		}

		::System::UInt32 JGKKIODILCO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNCHJBMIMAF_JGKKIODILCO_OFFSET))(this);
		}

		::System::Void KAADEPADNMH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LNCHJBMIMAF_KAADEPADNMH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LNCHJBMIMAF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LNCHJBMIMAF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LNCHJBMIMAF*))((::PBYTE)hIl2Cpp + LNCHJBMIMAF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNCHJBMIMAF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNCHJBMIMAF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LNCHJBMIMAF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNCHJBMIMAF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LNCHJBMIMAF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNCHJBMIMAF*))((::PBYTE)hIl2Cpp + LNCHJBMIMAF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LNCHJBMIMAF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
