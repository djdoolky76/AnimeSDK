#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JMGLAJFHNIM;
class OONNIGNNMGL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OONNIGNNMGL_BCFJGOKKHOL_OFFSET UNITYSDK_OFFSET(0x1F1A34E0)
#define OONNIGNNMGL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F1A3A20)
#define OONNIGNNMGL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F1A3D00)
#define OONNIGNNMGL_CLONE_OFFSET UNITYSDK_OFFSET(0x1F1A3440)
#define OONNIGNNMGL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F1A33C0)
#define OONNIGNNMGL_CTOR_OFFSET UNITYSDK_OFFSET(0x1F1A33B0)
#define OONNIGNNMGL_DDLLNIBEJFF_OFFSET UNITYSDK_OFFSET(0x1F1A34C0)
#define OONNIGNNMGL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F1A3690)
#define OONNIGNNMGL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F1A3500)
#define OONNIGNNMGL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F1A3810)
#define OONNIGNNMGL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F1A3370)
#define OONNIGNNMGL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F1A3B30)
#define OONNIGNNMGL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F1A3A80)
#define OONNIGNNMGL_NGBDPDLCCBF_OFFSET UNITYSDK_OFFSET(0x1F1A34F0)
#define OONNIGNNMGL_NKCBNKDGHCD_OFFSET UNITYSDK_OFFSET(0x1F1A34D0)
#define OONNIGNNMGL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F1A33A0)
#define OONNIGNNMGL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F1A38B0)
#define OONNIGNNMGL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F1A3910)

inline static constexpr unsigned int OONNIGNNMGL_TypeDefinitionIndex = 28823;

	class OONNIGNNMGL : public ::System::Object
	{
	public:
		::JMGLAJFHNIM* NGMGBOCMMIM; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::Boolean CKAHNINPCLL; // 0x20
		static ::Google::Protobuf::MessageParser_1<::OONNIGNNMGL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OONNIGNNMGL*>**)UnitySDK::FromName("", "OONNIGNNMGL")->GetStaticField(0x285C0);
		}

		// static const ::System::Object JALDHEPEHNJ; // 0x0
		// static const ::System::Object NLBBKKMIMDO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OONNIGNNMGL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OONNIGNNMGL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OONNIGNNMGL*))((::PBYTE)hIl2Cpp + OONNIGNNMGL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OONNIGNNMGL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OONNIGNNMGL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OONNIGNNMGL*>*(*)())((::PBYTE)hIl2Cpp + OONNIGNNMGL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OONNIGNNMGL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OONNIGNNMGL* Clone()
		{
			return ((::OONNIGNNMGL*(*)(::PVOID))((::PBYTE)hIl2Cpp + OONNIGNNMGL_CLONE_OFFSET))(this);
		}

		::JMGLAJFHNIM* DDLLNIBEJFF()
		{
			return ((::JMGLAJFHNIM*(*)(::PVOID))((::PBYTE)hIl2Cpp + OONNIGNNMGL_DDLLNIBEJFF_OFFSET))(this);
		}

		::System::Void NKCBNKDGHCD(::JMGLAJFHNIM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JMGLAJFHNIM*))((::PBYTE)hIl2Cpp + OONNIGNNMGL_NKCBNKDGHCD_OFFSET))(this, a1);
		}

		::System::Boolean BCFJGOKKHOL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OONNIGNNMGL_BCFJGOKKHOL_OFFSET))(this);
		}

		::System::Void NGBDPDLCCBF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OONNIGNNMGL_NGBDPDLCCBF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OONNIGNNMGL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OONNIGNNMGL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OONNIGNNMGL*))((::PBYTE)hIl2Cpp + OONNIGNNMGL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OONNIGNNMGL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OONNIGNNMGL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OONNIGNNMGL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OONNIGNNMGL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OONNIGNNMGL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OONNIGNNMGL*))((::PBYTE)hIl2Cpp + OONNIGNNMGL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OONNIGNNMGL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
