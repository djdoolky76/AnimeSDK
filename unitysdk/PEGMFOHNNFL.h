#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PEGMFOHNNFL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PEGMFOHNNFL_APPPOHDNCFL_OFFSET UNITYSDK_OFFSET(0x1F1E6610)
#define PEGMFOHNNFL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F1E6990)
#define PEGMFOHNNFL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F1E6C60)
#define PEGMFOHNNFL_CLONE_OFFSET UNITYSDK_OFFSET(0x1F1E6590)
#define PEGMFOHNNFL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F1E6560)
#define PEGMFOHNNFL_CTOR_OFFSET UNITYSDK_OFFSET(0x1F1E6550)
#define PEGMFOHNNFL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F1E6750)
#define PEGMFOHNNFL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F1E6640)
#define PEGMFOHNNFL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F1E6820)
#define PEGMFOHNNFL_IIILLEPDBCJ_OFFSET UNITYSDK_OFFSET(0x1F1E6600)
#define PEGMFOHNNFL_IKIEAOFBLBN_OFFSET UNITYSDK_OFFSET(0x1F1E6630)
#define PEGMFOHNNFL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F1E64E0)
#define PEGMFOHNNFL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F1E6AE0)
#define PEGMFOHNNFL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F1E6AA0)
#define PEGMFOHNNFL_OMOMKODHLNO_OFFSET UNITYSDK_OFFSET(0x1F1E6620)
#define PEGMFOHNNFL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F1E6540)
#define PEGMFOHNNFL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F1E6850)
#define PEGMFOHNNFL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F1E68B0)

inline static constexpr unsigned int PEGMFOHNNFL_TypeDefinitionIndex = 29969;

	class PEGMFOHNNFL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 PPNELLDGNPC; // 0x18
		::System::UInt32 HJKGFNEBHKE; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::PEGMFOHNNFL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PEGMFOHNNFL*>**)UnitySDK::FromName("", "PEGMFOHNNFL")->GetStaticField(0x305D0);
		}

		// static const ::System::Object GLIJLPOGDAK; // 0x0
		// static const ::System::Object DFFNNNFCDMO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGMFOHNNFL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PEGMFOHNNFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PEGMFOHNNFL*))((::PBYTE)hIl2Cpp + PEGMFOHNNFL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PEGMFOHNNFL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PEGMFOHNNFL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PEGMFOHNNFL*>*(*)())((::PBYTE)hIl2Cpp + PEGMFOHNNFL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGMFOHNNFL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PEGMFOHNNFL* Clone()
		{
			return ((::PEGMFOHNNFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGMFOHNNFL_CLONE_OFFSET))(this);
		}

		::System::UInt32 IIILLEPDBCJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGMFOHNNFL_IIILLEPDBCJ_OFFSET))(this);
		}

		::System::Void APPPOHDNCFL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PEGMFOHNNFL_APPPOHDNCFL_OFFSET))(this, a1);
		}

		::System::UInt32 OMOMKODHLNO()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGMFOHNNFL_OMOMKODHLNO_OFFSET))(this);
		}

		::System::Void IKIEAOFBLBN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PEGMFOHNNFL_IKIEAOFBLBN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PEGMFOHNNFL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PEGMFOHNNFL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PEGMFOHNNFL*))((::PBYTE)hIl2Cpp + PEGMFOHNNFL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGMFOHNNFL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGMFOHNNFL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PEGMFOHNNFL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEGMFOHNNFL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PEGMFOHNNFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PEGMFOHNNFL*))((::PBYTE)hIl2Cpp + PEGMFOHNNFL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PEGMFOHNNFL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
