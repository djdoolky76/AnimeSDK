#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GDDLBMCHIED;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GDDLBMCHIED_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4458B0)
#define GDDLBMCHIED_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E445BA0)
#define GDDLBMCHIED_CLONE_OFFSET UNITYSDK_OFFSET(0x1E445420)
#define GDDLBMCHIED_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E445390)
#define GDDLBMCHIED_CTOR_OFFSET UNITYSDK_OFFSET(0x1E445340)
#define GDDLBMCHIED_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E445580)
#define GDDLBMCHIED_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E445480)
#define GDDLBMCHIED_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E445670)
#define GDDLBMCHIED_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E445300)
#define GDDLBMCHIED_KCPKDDMHLEE_OFFSET UNITYSDK_OFFSET(0x1E445470)
#define GDDLBMCHIED_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E4459E0)
#define GDDLBMCHIED_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E445990)
#define GDDLBMCHIED_NKNEBECLBOF_OFFSET UNITYSDK_OFFSET(0x1E445460)
#define GDDLBMCHIED_OGFEKBBBEMA_OFFSET UNITYSDK_OFFSET(0x1E445450)
#define GDDLBMCHIED_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E445330)
#define GDDLBMCHIED_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E445770)
#define GDDLBMCHIED_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4457D0)

inline static constexpr unsigned int GDDLBMCHIED_TypeDefinitionIndex = 27065;

	class GDDLBMCHIED : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* BEAEFOFBGGC; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 OJGKLENJPDA; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_BNDEKJJNCFO()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "GDDLBMCHIED")->GetStaticField(0x10190);
		}

		static ::Google::Protobuf::MessageParser_1<::GDDLBMCHIED*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GDDLBMCHIED*>**)UnitySDK::FromName("", "GDDLBMCHIED")->GetStaticField(0x10198);
		}

		// static const ::System::Object EEMPBGGOLOO; // 0x0
		// static const ::System::Object JJAOPKFLHBC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDDLBMCHIED_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GDDLBMCHIED* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GDDLBMCHIED*))((::PBYTE)hIl2Cpp + GDDLBMCHIED_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDDLBMCHIED_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GDDLBMCHIED*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GDDLBMCHIED*>*(*)())((::PBYTE)hIl2Cpp + GDDLBMCHIED_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDDLBMCHIED_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GDDLBMCHIED* Clone()
		{
			return ((::GDDLBMCHIED*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDDLBMCHIED_CLONE_OFFSET))(this);
		}

		::System::UInt32 OGFEKBBBEMA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDDLBMCHIED_OGFEKBBBEMA_OFFSET))(this);
		}

		::System::Void NKNEBECLBOF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GDDLBMCHIED_NKNEBECLBOF_OFFSET))(this, a1);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* KCPKDDMHLEE()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDDLBMCHIED_KCPKDDMHLEE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GDDLBMCHIED_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GDDLBMCHIED* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GDDLBMCHIED*))((::PBYTE)hIl2Cpp + GDDLBMCHIED_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDDLBMCHIED_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDDLBMCHIED_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GDDLBMCHIED_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDDLBMCHIED_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GDDLBMCHIED* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GDDLBMCHIED*))((::PBYTE)hIl2Cpp + GDDLBMCHIED_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GDDLBMCHIED_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
