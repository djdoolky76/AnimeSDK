#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OGGNBCHLCKH.h"
#include "unitysdk/System/Object.h"
class JFJPIJJDNDC;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JFJPIJJDNDC_ABAEFKOPJAB_OFFSET UNITYSDK_OFFSET(0x1E6FF920)
#define JFJPIJJDNDC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6FFC90)
#define JFJPIJJDNDC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6FFFA0)
#define JFJPIJJDNDC_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6FF8D0)
#define JFJPIJJDNDC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6FF8A0)
#define JFJPIJJDNDC_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6FF890)
#define JFJPIJJDNDC_ECLDFKPJMBD_OFFSET UNITYSDK_OFFSET(0x1E6FF930)
#define JFJPIJJDNDC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6FFA40)
#define JFJPIJJDNDC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6FF960)
#define JFJPIJJDNDC_FBGOBLGGMDD_OFFSET UNITYSDK_OFFSET(0x1E6FF940)
#define JFJPIJJDNDC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6FFB10)
#define JFJPIJJDNDC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6FF850)
#define JFJPIJJDNDC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6FFE20)
#define JFJPIJJDNDC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6FFDE0)
#define JFJPIJJDNDC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6FF880)
#define JFJPIJJDNDC_POCEMHAHKBI_OFFSET UNITYSDK_OFFSET(0x1E6FF950)
#define JFJPIJJDNDC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6FFB40)
#define JFJPIJJDNDC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6FFBA0)

inline static constexpr unsigned int JFJPIJJDNDC_TypeDefinitionIndex = 33974;

	class JFJPIJJDNDC : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HEOJOPAOBGB; // 0x18
		::OGGNBCHLCKH PCOGOBLACGK; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::JFJPIJJDNDC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JFJPIJJDNDC*>**)UnitySDK::FromName("", "JFJPIJJDNDC")->GetStaticField(0x46F30);
		}

		// static const ::System::Object PKDBEGDNIFK; // 0x0
		// static const ::System::Object KNGHAAMKLCC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFJPIJJDNDC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JFJPIJJDNDC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFJPIJJDNDC*))((::PBYTE)hIl2Cpp + JFJPIJJDNDC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFJPIJJDNDC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JFJPIJJDNDC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JFJPIJJDNDC*>*(*)())((::PBYTE)hIl2Cpp + JFJPIJJDNDC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFJPIJJDNDC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JFJPIJJDNDC* Clone()
		{
			return ((::JFJPIJJDNDC*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFJPIJJDNDC_CLONE_OFFSET))(this);
		}

		::OGGNBCHLCKH ABAEFKOPJAB()
		{
			return ((::OGGNBCHLCKH(*)(::PVOID))((::PBYTE)hIl2Cpp + JFJPIJJDNDC_ABAEFKOPJAB_OFFSET))(this);
		}

		::System::Void ECLDFKPJMBD(::OGGNBCHLCKH a1)
		{
			return ((::System::Void(*)(::PVOID, ::OGGNBCHLCKH))((::PBYTE)hIl2Cpp + JFJPIJJDNDC_ECLDFKPJMBD_OFFSET))(this, a1);
		}

		::System::UInt32 FBGOBLGGMDD()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFJPIJJDNDC_FBGOBLGGMDD_OFFSET))(this);
		}

		::System::Void POCEMHAHKBI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JFJPIJJDNDC_POCEMHAHKBI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JFJPIJJDNDC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JFJPIJJDNDC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JFJPIJJDNDC*))((::PBYTE)hIl2Cpp + JFJPIJJDNDC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFJPIJJDNDC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFJPIJJDNDC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JFJPIJJDNDC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFJPIJJDNDC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JFJPIJJDNDC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFJPIJJDNDC*))((::PBYTE)hIl2Cpp + JFJPIJJDNDC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JFJPIJJDNDC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
