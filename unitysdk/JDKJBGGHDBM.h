#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JDKJBGGHDBM;
class KJAMNOGFAMJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JDKJBGGHDBM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E6DF8E0)
#define JDKJBGGHDBM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6DFC20)
#define JDKJBGGHDBM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E6DF2A0)
#define JDKJBGGHDBM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E6DF220)
#define JDKJBGGHDBM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6DF210)
#define JDKJBGGHDBM_EELCBMPAIIH_OFFSET UNITYSDK_OFFSET(0x1E6DF350)
#define JDKJBGGHDBM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E6DF530)
#define JDKJBGGHDBM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E6DF390)
#define JDKJBGGHDBM_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E6DF340)
#define JDKJBGGHDBM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E6DF6B0)
#define JDKJBGGHDBM_HNHHFFHAAOF_OFFSET UNITYSDK_OFFSET(0x1E6DF370)
#define JDKJBGGHDBM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E6DF1D0)
#define JDKJBGGHDBM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E6DFA70)
#define JDKJBGGHDBM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E6DF9C0)
#define JDKJBGGHDBM_MJEKJDCGBMN_OFFSET UNITYSDK_OFFSET(0x1E6DF360)
#define JDKJBGGHDBM_MLMDGHMGMPD_OFFSET UNITYSDK_OFFSET(0x1E6DF380)
#define JDKJBGGHDBM_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E6DF330)
#define JDKJBGGHDBM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E6DF200)
#define JDKJBGGHDBM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E6DF710)
#define JDKJBGGHDBM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E6DF770)

inline static constexpr unsigned int JDKJBGGHDBM_TypeDefinitionIndex = 27373;

	class JDKJBGGHDBM : public ::System::Object
	{
	public:
		::KJAMNOGFAMJ* ACMAPPLIANE; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::Boolean MNEDBKBAJJF; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 NAEACGPKNNH; // 0x24
		static ::Google::Protobuf::MessageParser_1<::JDKJBGGHDBM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JDKJBGGHDBM*>**)UnitySDK::FromName("", "JDKJBGGHDBM")->GetStaticField(0x5ABF0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object BEKFPIJNGND; // 0x0
		// static const ::System::Object EOGEPKBLOBE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDKJBGGHDBM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JDKJBGGHDBM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JDKJBGGHDBM*))((::PBYTE)hIl2Cpp + JDKJBGGHDBM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JDKJBGGHDBM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JDKJBGGHDBM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JDKJBGGHDBM*>*(*)())((::PBYTE)hIl2Cpp + JDKJBGGHDBM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDKJBGGHDBM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JDKJBGGHDBM* Clone()
		{
			return ((::JDKJBGGHDBM*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDKJBGGHDBM_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDKJBGGHDBM_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JDKJBGGHDBM_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::KJAMNOGFAMJ* EELCBMPAIIH()
		{
			return ((::KJAMNOGFAMJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDKJBGGHDBM_EELCBMPAIIH_OFFSET))(this);
		}

		::System::Void MJEKJDCGBMN(::KJAMNOGFAMJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJAMNOGFAMJ*))((::PBYTE)hIl2Cpp + JDKJBGGHDBM_MJEKJDCGBMN_OFFSET))(this, a1);
		}

		::System::Boolean HNHHFFHAAOF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JDKJBGGHDBM_HNHHFFHAAOF_OFFSET))(this);
		}

		::System::Void MLMDGHMGMPD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JDKJBGGHDBM_MLMDGHMGMPD_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JDKJBGGHDBM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JDKJBGGHDBM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JDKJBGGHDBM*))((::PBYTE)hIl2Cpp + JDKJBGGHDBM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDKJBGGHDBM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JDKJBGGHDBM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JDKJBGGHDBM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JDKJBGGHDBM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JDKJBGGHDBM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JDKJBGGHDBM*))((::PBYTE)hIl2Cpp + JDKJBGGHDBM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JDKJBGGHDBM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
