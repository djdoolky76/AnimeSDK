#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GKJEMHKOMJC;
class LHJBIHJBNHI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LHJBIHJBNHI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E962C20)
#define LHJBIHJBNHI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E962F20)
#define LHJBIHJBNHI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E962520)
#define LHJBIHJBNHI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E962490)
#define LHJBIHJBNHI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E962480)
#define LHJBIHJBNHI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9627B0)
#define LHJBIHJBNHI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E962610)
#define LHJBIHJBNHI_FEEHMANCAAJ_OFFSET UNITYSDK_OFFSET(0x1E962600)
#define LHJBIHJBNHI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E962A80)
#define LHJBIHJBNHI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E962410)
#define LHJBIHJBNHI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E962D50)
#define LHJBIHJBNHI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E962C80)
#define LHJBIHJBNHI_NHGACPILNBI_OFFSET UNITYSDK_OFFSET(0x1E9625F0)
#define LHJBIHJBNHI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E962470)
#define LHJBIHJBNHI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E962B30)
#define LHJBIHJBNHI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E962B90)

inline static constexpr unsigned int LHJBIHJBNHI_TypeDefinitionIndex = 28355;

	class LHJBIHJBNHI : public ::System::Object
	{
	public:
		::GKJEMHKOMJC* LFDIOPHFFAG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::LHJBIHJBNHI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LHJBIHJBNHI*>**)UnitySDK::FromName("", "LHJBIHJBNHI")->GetStaticField(0x41250);
		}

		// static const ::System::Object AAEENEBJKIC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHJBIHJBNHI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LHJBIHJBNHI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LHJBIHJBNHI*))((::PBYTE)hIl2Cpp + LHJBIHJBNHI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LHJBIHJBNHI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LHJBIHJBNHI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LHJBIHJBNHI*>*(*)())((::PBYTE)hIl2Cpp + LHJBIHJBNHI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHJBIHJBNHI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LHJBIHJBNHI* Clone()
		{
			return ((::LHJBIHJBNHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHJBIHJBNHI_CLONE_OFFSET))(this);
		}

		::GKJEMHKOMJC* NHGACPILNBI()
		{
			return ((::GKJEMHKOMJC*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHJBIHJBNHI_NHGACPILNBI_OFFSET))(this);
		}

		::System::Void FEEHMANCAAJ(::GKJEMHKOMJC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GKJEMHKOMJC*))((::PBYTE)hIl2Cpp + LHJBIHJBNHI_FEEHMANCAAJ_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LHJBIHJBNHI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LHJBIHJBNHI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LHJBIHJBNHI*))((::PBYTE)hIl2Cpp + LHJBIHJBNHI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHJBIHJBNHI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHJBIHJBNHI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LHJBIHJBNHI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHJBIHJBNHI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LHJBIHJBNHI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LHJBIHJBNHI*))((::PBYTE)hIl2Cpp + LHJBIHJBNHI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LHJBIHJBNHI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
