#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OOMNNODJGPH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define OOMNNODJGPH_BEGPKDAIOPO_OFFSET UNITYSDK_OFFSET(0x2035FC60)
#define OOMNNODJGPH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x20360000)
#define OOMNNODJGPH_CCTOR_OFFSET UNITYSDK_OFFSET(0x20360260)
#define OOMNNODJGPH_CLONE_OFFSET UNITYSDK_OFFSET(0x2035FBB0)
#define OOMNNODJGPH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x2035FB70)
#define OOMNNODJGPH_CTOR_OFFSET UNITYSDK_OFFSET(0x2035FB60)
#define OOMNNODJGPH_EPFPLLOFFFB_OFFSET UNITYSDK_OFFSET(0x2035FC50)
#define OOMNNODJGPH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2035FD80)
#define OOMNNODJGPH_EQUALS_OFFSET UNITYSDK_OFFSET(0x2035FC70)
#define OOMNNODJGPH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2035FE60)
#define OOMNNODJGPH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x2035FAF0)
#define OOMNNODJGPH_KHEHBNAJAIL_OFFSET UNITYSDK_OFFSET(0x2035FC30)
#define OOMNNODJGPH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x203600E0)
#define OOMNNODJGPH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x203600A0)
#define OOMNNODJGPH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x2035FB50)
#define OOMNNODJGPH_PPHPGNICPID_OFFSET UNITYSDK_OFFSET(0x2035FC40)
#define OOMNNODJGPH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2035FE90)
#define OOMNNODJGPH_WRITETO_OFFSET UNITYSDK_OFFSET(0x2035FEF0)

inline static constexpr unsigned int OOMNNODJGPH_TypeDefinitionIndex = 30836;

	class OOMNNODJGPH : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean OBGJHGMKIHF; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 ECCMJBDHOBD; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::OOMNNODJGPH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::OOMNNODJGPH*>**)UnitySDK::FromName("", "OOMNNODJGPH")->GetStaticField(0x29F70);
		}

		// static const ::System::Object CFLIFLIONBM; // 0x0
		// static const ::System::Object CEDDGAMLKJK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOMNNODJGPH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::OOMNNODJGPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OOMNNODJGPH*))((::PBYTE)hIl2Cpp + OOMNNODJGPH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OOMNNODJGPH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::OOMNNODJGPH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::OOMNNODJGPH*>*(*)())((::PBYTE)hIl2Cpp + OOMNNODJGPH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOMNNODJGPH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::OOMNNODJGPH* Clone()
		{
			return ((::OOMNNODJGPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOMNNODJGPH_CLONE_OFFSET))(this);
		}

		::System::Boolean KHEHBNAJAIL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OOMNNODJGPH_KHEHBNAJAIL_OFFSET))(this);
		}

		::System::Void PPHPGNICPID(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OOMNNODJGPH_PPHPGNICPID_OFFSET))(this, a1);
		}

		::System::UInt32 EPFPLLOFFFB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OOMNNODJGPH_EPFPLLOFFFB_OFFSET))(this);
		}

		::System::Void BEGPKDAIOPO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OOMNNODJGPH_BEGPKDAIOPO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OOMNNODJGPH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::OOMNNODJGPH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OOMNNODJGPH*))((::PBYTE)hIl2Cpp + OOMNNODJGPH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OOMNNODJGPH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OOMNNODJGPH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + OOMNNODJGPH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OOMNNODJGPH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::OOMNNODJGPH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OOMNNODJGPH*))((::PBYTE)hIl2Cpp + OOMNNODJGPH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + OOMNNODJGPH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
