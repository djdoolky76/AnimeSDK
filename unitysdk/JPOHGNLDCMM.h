#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JPOHGNLDCMM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JPOHGNLDCMM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7DB3D0)
#define JPOHGNLDCMM_CBOFFPEFEPP_OFFSET UNITYSDK_OFFSET(0x1E7DAFC0)
#define JPOHGNLDCMM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7DB700)
#define JPOHGNLDCMM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7DAF50)
#define JPOHGNLDCMM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7DAF10)
#define JPOHGNLDCMM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7DAF00)
#define JPOHGNLDCMM_DLBMEBEGNGL_OFFSET UNITYSDK_OFFSET(0x1E7DAFD0)
#define JPOHGNLDCMM_ECLJEIOLMND_OFFSET UNITYSDK_OFFSET(0x1E7DAFA0)
#define JPOHGNLDCMM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7DB0F0)
#define JPOHGNLDCMM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7DB000)
#define JPOHGNLDCMM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7DB1D0)
#define JPOHGNLDCMM_GNBEKJGDKHN_OFFSET UNITYSDK_OFFSET(0x1E7DAFF0)
#define JPOHGNLDCMM_HOCGGDMCDKB_OFFSET UNITYSDK_OFFSET(0x1E7DAFE0)
#define JPOHGNLDCMM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7DAEC0)
#define JPOHGNLDCMM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7DB540)
#define JPOHGNLDCMM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7DB4F0)
#define JPOHGNLDCMM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7DAEF0)
#define JPOHGNLDCMM_PDJIOGFEPLI_OFFSET UNITYSDK_OFFSET(0x1E7DAFB0)
#define JPOHGNLDCMM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7DB200)
#define JPOHGNLDCMM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7DB260)

inline static constexpr unsigned int JPOHGNLDCMM_TypeDefinitionIndex = 31416;

	class JPOHGNLDCMM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NNLJKKAEICI; // 0x18
		::System::UInt32 NBFPOGFBMFE; // 0x1C
		::System::Boolean OEDLLKLLNDF; // 0x20
		static ::Google::Protobuf::MessageParser_1<::JPOHGNLDCMM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JPOHGNLDCMM*>**)UnitySDK::FromName("", "JPOHGNLDCMM")->GetStaticField(0xCAE0);
		}

		// static const ::System::Object BFMLFALLFGN; // 0x0
		// static const ::System::Object GKBPDIPOFGE; // 0x0
		// static const ::System::Object DKOCHCCBOAG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPOHGNLDCMM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JPOHGNLDCMM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPOHGNLDCMM*))((::PBYTE)hIl2Cpp + JPOHGNLDCMM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JPOHGNLDCMM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JPOHGNLDCMM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JPOHGNLDCMM*>*(*)())((::PBYTE)hIl2Cpp + JPOHGNLDCMM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPOHGNLDCMM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JPOHGNLDCMM* Clone()
		{
			return ((::JPOHGNLDCMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPOHGNLDCMM_CLONE_OFFSET))(this);
		}

		::System::UInt32 ECLJEIOLMND()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPOHGNLDCMM_ECLJEIOLMND_OFFSET))(this);
		}

		::System::Void PDJIOGFEPLI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JPOHGNLDCMM_PDJIOGFEPLI_OFFSET))(this, a1);
		}

		::System::UInt32 CBOFFPEFEPP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPOHGNLDCMM_CBOFFPEFEPP_OFFSET))(this);
		}

		::System::Void DLBMEBEGNGL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JPOHGNLDCMM_DLBMEBEGNGL_OFFSET))(this, a1);
		}

		::System::Boolean HOCGGDMCDKB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JPOHGNLDCMM_HOCGGDMCDKB_OFFSET))(this);
		}

		::System::Void GNBEKJGDKHN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JPOHGNLDCMM_GNBEKJGDKHN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JPOHGNLDCMM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JPOHGNLDCMM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JPOHGNLDCMM*))((::PBYTE)hIl2Cpp + JPOHGNLDCMM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPOHGNLDCMM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JPOHGNLDCMM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JPOHGNLDCMM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPOHGNLDCMM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JPOHGNLDCMM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPOHGNLDCMM*))((::PBYTE)hIl2Cpp + JPOHGNLDCMM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JPOHGNLDCMM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
