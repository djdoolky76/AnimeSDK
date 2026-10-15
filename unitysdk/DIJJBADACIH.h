#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DIJJBADACIH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DIJJBADACIH_AENLBGLIBJL_OFFSET UNITYSDK_OFFSET(0x1E1935C0)
#define DIJJBADACIH_AIMMOANBDCA_OFFSET UNITYSDK_OFFSET(0x1E1935D0)
#define DIJJBADACIH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E193910)
#define DIJJBADACIH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E193C30)
#define DIJJBADACIH_CLONE_OFFSET UNITYSDK_OFFSET(0x1E193550)
#define DIJJBADACIH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E193510)
#define DIJJBADACIH_CTOR_OFFSET UNITYSDK_OFFSET(0x1E193500)
#define DIJJBADACIH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E1936C0)
#define DIJJBADACIH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1935E0)
#define DIJJBADACIH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E193790)
#define DIJJBADACIH_GNBIPGJGOAJ_OFFSET UNITYSDK_OFFSET(0x1E1935B0)
#define DIJJBADACIH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E1934C0)
#define DIJJBADACIH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E193AB0)
#define DIJJBADACIH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E193A70)
#define DIJJBADACIH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E1934F0)
#define DIJJBADACIH_PJLEOJKPGAJ_OFFSET UNITYSDK_OFFSET(0x1E1935A0)
#define DIJJBADACIH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1937D0)
#define DIJJBADACIH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E193830)

inline static constexpr unsigned int DIJJBADACIH_TypeDefinitionIndex = 28207;

	class DIJJBADACIH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 LJDBCGPFFDH; // 0x18
		::System::Byte _padding0[0x4];
		::System::UInt64 BCLKCLDFMOA; // 0x20
		static ::Google::Protobuf::MessageParser_1<::DIJJBADACIH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DIJJBADACIH*>**)UnitySDK::FromName("", "DIJJBADACIH")->GetStaticField(0xCD60);
		}

		// static const ::System::Object IBJNBJNDPIK; // 0x0
		// static const ::System::Object KOEOEHIMOEI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIJJBADACIH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DIJJBADACIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DIJJBADACIH*))((::PBYTE)hIl2Cpp + DIJJBADACIH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DIJJBADACIH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DIJJBADACIH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DIJJBADACIH*>*(*)())((::PBYTE)hIl2Cpp + DIJJBADACIH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIJJBADACIH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DIJJBADACIH* Clone()
		{
			return ((::DIJJBADACIH*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIJJBADACIH_CLONE_OFFSET))(this);
		}

		::System::UInt64 PJLEOJKPGAJ()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + DIJJBADACIH_PJLEOJKPGAJ_OFFSET))(this);
		}

		::System::Void GNBIPGJGOAJ(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + DIJJBADACIH_GNBIPGJGOAJ_OFFSET))(this, a1);
		}

		::System::UInt32 AENLBGLIBJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIJJBADACIH_AENLBGLIBJL_OFFSET))(this);
		}

		::System::Void AIMMOANBDCA(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DIJJBADACIH_AIMMOANBDCA_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DIJJBADACIH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DIJJBADACIH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DIJJBADACIH*))((::PBYTE)hIl2Cpp + DIJJBADACIH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIJJBADACIH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIJJBADACIH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DIJJBADACIH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DIJJBADACIH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DIJJBADACIH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DIJJBADACIH*))((::PBYTE)hIl2Cpp + DIJJBADACIH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DIJJBADACIH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
