#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KPBAIEMEFFH;
class MNPGEDIDKEN;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MNPGEDIDKEN_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FDDE210)
#define MNPGEDIDKEN_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDDE570)
#define MNPGEDIDKEN_CLONE_OFFSET UNITYSDK_OFFSET(0x1FDDDBF0)
#define MNPGEDIDKEN_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FDDDB80)
#define MNPGEDIDKEN_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDDDB70)
#define MNPGEDIDKEN_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FDDDE00)
#define MNPGEDIDKEN_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FDDDC90)
#define MNPGEDIDKEN_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FDDE0D0)
#define MNPGEDIDKEN_JAGDMIHOCNJ_OFFSET UNITYSDK_OFFSET(0x1FDDDC70)
#define MNPGEDIDKEN_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FDDDB30)
#define MNPGEDIDKEN_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FDDE360)
#define MNPGEDIDKEN_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FDDE270)
#define MNPGEDIDKEN_OLFJPAKHBBP_OFFSET UNITYSDK_OFFSET(0x1FDDDC80)
#define MNPGEDIDKEN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FDDDB60)
#define MNPGEDIDKEN_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FDDE120)
#define MNPGEDIDKEN_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FDDE180)

inline static constexpr unsigned int MNPGEDIDKEN_TypeDefinitionIndex = 26755;

	class MNPGEDIDKEN : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::KPBAIEMEFFH* AHGLDOFDIGD; // 0x18
		static ::Google::Protobuf::MessageParser_1<::MNPGEDIDKEN*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MNPGEDIDKEN*>**)UnitySDK::FromName("", "MNPGEDIDKEN")->GetStaticField(0x62310);
		}

		// static const ::System::Object EOOCNBLDGJH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNPGEDIDKEN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MNPGEDIDKEN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MNPGEDIDKEN*))((::PBYTE)hIl2Cpp + MNPGEDIDKEN_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MNPGEDIDKEN_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MNPGEDIDKEN*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MNPGEDIDKEN*>*(*)())((::PBYTE)hIl2Cpp + MNPGEDIDKEN_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNPGEDIDKEN_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MNPGEDIDKEN* Clone()
		{
			return ((::MNPGEDIDKEN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNPGEDIDKEN_CLONE_OFFSET))(this);
		}

		::KPBAIEMEFFH* JAGDMIHOCNJ()
		{
			return ((::KPBAIEMEFFH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNPGEDIDKEN_JAGDMIHOCNJ_OFFSET))(this);
		}

		::System::Void OLFJPAKHBBP(::KPBAIEMEFFH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KPBAIEMEFFH*))((::PBYTE)hIl2Cpp + MNPGEDIDKEN_OLFJPAKHBBP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MNPGEDIDKEN_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MNPGEDIDKEN* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MNPGEDIDKEN*))((::PBYTE)hIl2Cpp + MNPGEDIDKEN_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNPGEDIDKEN_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MNPGEDIDKEN_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MNPGEDIDKEN_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MNPGEDIDKEN_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MNPGEDIDKEN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MNPGEDIDKEN*))((::PBYTE)hIl2Cpp + MNPGEDIDKEN_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MNPGEDIDKEN_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
