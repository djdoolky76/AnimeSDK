#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPDDKCNHJAB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KPDDKCNHJAB_AABOOKNIJKN_OFFSET UNITYSDK_OFFSET(0x1E8BA7F0)
#define KPDDKCNHJAB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E8BAB50)
#define KPDDKCNHJAB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8BAD70)
#define KPDDKCNHJAB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E8BA7A0)
#define KPDDKCNHJAB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E8BA770)
#define KPDDKCNHJAB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8BA760)
#define KPDDKCNHJAB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8BA8D0)
#define KPDDKCNHJAB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8BA800)
#define KPDDKCNHJAB_FEGIMNBKFHN_OFFSET UNITYSDK_OFFSET(0x1E8BA7E0)
#define KPDDKCNHJAB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8BAA40)
#define KPDDKCNHJAB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E8BA720)
#define KPDDKCNHJAB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E8BAC10)
#define KPDDKCNHJAB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E8BABE0)
#define KPDDKCNHJAB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E8BA750)
#define KPDDKCNHJAB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8BAA70)
#define KPDDKCNHJAB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E8BAAD0)

inline static constexpr unsigned int KPDDKCNHJAB_TypeDefinitionIndex = 32754;

	class KPDDKCNHJAB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 MLCHFINKHHM; // 0x18
		static ::Google::Protobuf::MessageParser_1<::KPDDKCNHJAB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KPDDKCNHJAB*>**)UnitySDK::FromName("", "KPDDKCNHJAB")->GetStaticField(0x2CA00);
		}

		// static const ::System::Object HBIJBPKKMNN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPDDKCNHJAB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KPDDKCNHJAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPDDKCNHJAB*))((::PBYTE)hIl2Cpp + KPDDKCNHJAB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPDDKCNHJAB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KPDDKCNHJAB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KPDDKCNHJAB*>*(*)())((::PBYTE)hIl2Cpp + KPDDKCNHJAB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPDDKCNHJAB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KPDDKCNHJAB* Clone()
		{
			return ((::KPDDKCNHJAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPDDKCNHJAB_CLONE_OFFSET))(this);
		}

		::System::UInt32 FEGIMNBKFHN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPDDKCNHJAB_FEGIMNBKFHN_OFFSET))(this);
		}

		::System::Void AABOOKNIJKN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KPDDKCNHJAB_AABOOKNIJKN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KPDDKCNHJAB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KPDDKCNHJAB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KPDDKCNHJAB*))((::PBYTE)hIl2Cpp + KPDDKCNHJAB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPDDKCNHJAB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KPDDKCNHJAB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KPDDKCNHJAB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPDDKCNHJAB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KPDDKCNHJAB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPDDKCNHJAB*))((::PBYTE)hIl2Cpp + KPDDKCNHJAB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KPDDKCNHJAB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
