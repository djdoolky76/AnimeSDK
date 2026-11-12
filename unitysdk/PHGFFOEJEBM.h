#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PHGFFOEJEBM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PHGFFOEJEBM_AMMKMNDOGCE_OFFSET UNITYSDK_OFFSET(0x1F207090)
#define PHGFFOEJEBM_BIHPNHDBOJE_OFFSET UNITYSDK_OFFSET(0x1F2070F0)
#define PHGFFOEJEBM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F207640)
#define PHGFFOEJEBM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F207930)
#define PHGFFOEJEBM_CLONE_OFFSET UNITYSDK_OFFSET(0x1F207020)
#define PHGFFOEJEBM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F206FD0)
#define PHGFFOEJEBM_CTOR_OFFSET UNITYSDK_OFFSET(0x1F206FB0)
#define PHGFFOEJEBM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F207270)
#define PHGFFOEJEBM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F207140)
#define PHGFFOEJEBM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F2073A0)
#define PHGFFOEJEBM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F206F70)
#define PHGFFOEJEBM_JPEGPHLLMKN_OFFSET UNITYSDK_OFFSET(0x1F2070E0)
#define PHGFFOEJEBM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F207740)
#define PHGFFOEJEBM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F2076E0)
#define PHGFFOEJEBM_NPLCDJIMMNE_OFFSET UNITYSDK_OFFSET(0x1F207080)
#define PHGFFOEJEBM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F206FA0)
#define PHGFFOEJEBM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F2074E0)
#define PHGFFOEJEBM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F207540)

inline static constexpr unsigned int PHGFFOEJEBM_TypeDefinitionIndex = 30548;

	class PHGFFOEJEBM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::String* FODIOFHEHOB; // 0x18
		::System::String* HHBKHBPNKKH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::PHGFFOEJEBM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PHGFFOEJEBM*>**)UnitySDK::FromName("", "PHGFFOEJEBM")->GetStaticField(0x35300);
		}

		// static const ::System::Object EHELOMBFMLI; // 0x0
		// static const ::System::Object FODIECHNCJH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHGFFOEJEBM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PHGFFOEJEBM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PHGFFOEJEBM*))((::PBYTE)hIl2Cpp + PHGFFOEJEBM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PHGFFOEJEBM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PHGFFOEJEBM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PHGFFOEJEBM*>*(*)())((::PBYTE)hIl2Cpp + PHGFFOEJEBM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHGFFOEJEBM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PHGFFOEJEBM* Clone()
		{
			return ((::PHGFFOEJEBM*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHGFFOEJEBM_CLONE_OFFSET))(this);
		}

		::System::String* NPLCDJIMMNE()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHGFFOEJEBM_NPLCDJIMMNE_OFFSET))(this);
		}

		::System::Void AMMKMNDOGCE(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PHGFFOEJEBM_AMMKMNDOGCE_OFFSET))(this, a1);
		}

		::System::String* JPEGPHLLMKN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHGFFOEJEBM_JPEGPHLLMKN_OFFSET))(this);
		}

		::System::Void BIHPNHDBOJE(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PHGFFOEJEBM_BIHPNHDBOJE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PHGFFOEJEBM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PHGFFOEJEBM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PHGFFOEJEBM*))((::PBYTE)hIl2Cpp + PHGFFOEJEBM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PHGFFOEJEBM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHGFFOEJEBM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PHGFFOEJEBM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PHGFFOEJEBM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PHGFFOEJEBM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PHGFFOEJEBM*))((::PBYTE)hIl2Cpp + PHGFFOEJEBM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PHGFFOEJEBM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
