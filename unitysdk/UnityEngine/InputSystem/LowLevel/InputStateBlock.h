#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/FourCC.h"
#include "unitysdk/UnityEngine/InputSystem/Utilities/PrimitiveValue.h"

namespace System { class Type; }

#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_COPYTOFROM_OFFSET UNITYSDK_OFFSET(0x8FF1C0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_FLOATTOPRIMITIVEVALUE_OFFSET UNITYSDK_OFFSET(0x8FF150)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GETPRIMITIVEFORMATFROMTYPE_OFFSET UNITYSDK_OFFSET(0x1E44E170)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GETSIZEOFPRIMITIVEFORMATINBITS_OFFSET UNITYSDK_OFFSET(0x1E44DCF0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GET_ALIGNEDSIZEINBYTES_OFFSET UNITYSDK_OFFSET(0x8FF0E0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GET_BITOFFSET_OFFSET UNITYSDK_OFFSET(0x363D60)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GET_BYTEOFFSET_OFFSET UNITYSDK_OFFSET(0x3CE9E0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GET_EFFECTIVEBITOFFSET_OFFSET UNITYSDK_OFFSET(0x8FF100)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GET_EFFECTIVEBYTEOFFSET_OFFSET UNITYSDK_OFFSET(0x8FF0F0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GET_FORMAT_OFFSET UNITYSDK_OFFSET(0x359320)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GET_SIZEINBITS_OFFSET UNITYSDK_OFFSET(0x3668E0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_READDOUBLE_OFFSET UNITYSDK_OFFSET(0x8FF170)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_READFLOAT_OFFSET UNITYSDK_OFFSET(0x8FF130)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_READINT_OFFSET UNITYSDK_OFFSET(0x8FF110)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_SET_BITOFFSET_OFFSET UNITYSDK_OFFSET(0x3A45D0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_SET_BYTEOFFSET_OFFSET UNITYSDK_OFFSET(0x52D8C0)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_SET_FORMAT_OFFSET UNITYSDK_OFFSET(0x359150)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_SET_SIZEINBITS_OFFSET UNITYSDK_OFFSET(0x5D0520)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_WRITEDOUBLE_OFFSET UNITYSDK_OFFSET(0x8FF180)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_WRITEFLOAT_OFFSET UNITYSDK_OFFSET(0x8FF140)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_WRITEINT_OFFSET UNITYSDK_OFFSET(0x8FF120)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_WRITE_OFFSET UNITYSDK_OFFSET(0x8FF190)
#define UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E450170)

namespace UnityEngine::InputSystem::LowLevel
{
	inline static constexpr unsigned int InputStateBlock_TypeDefinitionIndex = 32015;

	struct alignas(4) InputStateBlock
	{
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatUInt()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x8050);
		}
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatQuaternion()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x8054);
		}
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatBit()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x8058);
		}
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatUShort()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x805C);
		}
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatVector3Short()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x8060);
		}
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatVector3Byte()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x8064);
		}
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatDouble()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x8068);
		}
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatInt()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x806C);
		}
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatFloat()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x8070);
		}
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatVector2Byte()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x8074);
		}
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatULong()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x8078);
		}
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatVector2()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x807C);
		}
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatLong()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x8080);
		}
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatByte()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x8084);
		}
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatShort()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x8088);
		}
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatVector3()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x808C);
		}
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatVector2Short()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x8090);
		}
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatSByte()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x8094);
		}
		static ::UnityEngine::InputSystem::Utilities::FourCC* StaticGet_FormatSBit()
		{
			return (::UnityEngine::InputSystem::Utilities::FourCC*)Il2CppClass::FromTypeDefinitionIndex(InputStateBlock_TypeDefinitionIndex)->GetStaticField(0x8098);
		}
		// static const ::System::UInt32 InvalidOffset = 0xFFFFFFFF; // 0x0
		// static const ::System::UInt32 AutomaticOffset = 0xFFFFFFFE; // 0x0
		// static const ::System::Int32 kFormatBit = 0x42495420; // 0x0
		// static const ::System::Int32 kFormatSBit = 0x53424954; // 0x0
		// static const ::System::Int32 kFormatInt = 0x494E5420; // 0x0
		// static const ::System::Int32 kFormatUInt = 0x55494E54; // 0x0
		// static const ::System::Int32 kFormatShort = 0x53485254; // 0x0
		// static const ::System::Int32 kFormatUShort = 0x55534854; // 0x0
		// static const ::System::Int32 kFormatByte = 0x42595445; // 0x0
		// static const ::System::Int32 kFormatSByte = 0x53425954; // 0x0
		// static const ::System::Int32 kFormatLong = 0x4C4E4720; // 0x0
		// static const ::System::Int32 kFormatULong = 0x554C4E47; // 0x0
		// static const ::System::Int32 kFormatFloat = 0x464C5420; // 0x0
		// static const ::System::Int32 kFormatDouble = 0x44424C20; // 0x0
		::UnityEngine::InputSystem::Utilities::FourCC _format_k__BackingField; // 0x10
		::System::UInt32 _byteOffset_k__BackingField; // 0x14
		::System::UInt32 _bitOffset_k__BackingField; // 0x18
		::System::UInt32 _sizeInBits_k__BackingField; // 0x1C

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK__CCTOR_OFFSET))();
		}

		static ::System::Int32 GetSizeOfPrimitiveFormatInBits(::UnityEngine::InputSystem::Utilities::FourCC type)
		{
			return ((::System::Int32(*)(::UnityEngine::InputSystem::Utilities::FourCC))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GETSIZEOFPRIMITIVEFORMATINBITS_OFFSET))(type);
		}

		static ::UnityEngine::InputSystem::Utilities::FourCC GetPrimitiveFormatFromType(::System::Type* type)
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::System::Type*))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GETPRIMITIVEFORMATFROMTYPE_OFFSET))(type);
		}

		::UnityEngine::InputSystem::Utilities::FourCC get_format()
		{
			return ((::UnityEngine::InputSystem::Utilities::FourCC(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GET_FORMAT_OFFSET))(this);
		}

		::System::Void set_format(::UnityEngine::InputSystem::Utilities::FourCC value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::InputSystem::Utilities::FourCC))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_SET_FORMAT_OFFSET))(this, value);
		}

		::System::UInt32 get_byteOffset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GET_BYTEOFFSET_OFFSET))(this);
		}

		::System::Void set_byteOffset(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_SET_BYTEOFFSET_OFFSET))(this, value);
		}

		::System::UInt32 get_bitOffset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GET_BITOFFSET_OFFSET))(this);
		}

		::System::Void set_bitOffset(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_SET_BITOFFSET_OFFSET))(this, value);
		}

		::System::UInt32 get_sizeInBits()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GET_SIZEINBITS_OFFSET))(this);
		}

		::System::Void set_sizeInBits(::System::UInt32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_SET_SIZEINBITS_OFFSET))(this, value);
		}

		::System::UInt32 get_alignedSizeInBytes()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GET_ALIGNEDSIZEINBYTES_OFFSET))(this);
		}

		::System::UInt32 get_effectiveByteOffset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GET_EFFECTIVEBYTEOFFSET_OFFSET))(this);
		}

		::System::UInt32 get_effectiveBitOffset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_GET_EFFECTIVEBITOFFSET_OFFSET))(this);
		}

		::System::Int32 ReadInt(::PVOID statePtr)
		{
			return ((::System::Int32(*)(::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_READINT_OFFSET))(this, statePtr);
		}

		::System::Void WriteInt(::PVOID statePtr, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_WRITEINT_OFFSET))(this, statePtr, value);
		}

		::System::Single ReadFloat(::PVOID statePtr)
		{
			return ((::System::Single(*)(::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_READFLOAT_OFFSET))(this, statePtr);
		}

		::System::Void WriteFloat(::PVOID statePtr, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_WRITEFLOAT_OFFSET))(this, statePtr, value);
		}

		::UnityEngine::InputSystem::Utilities::PrimitiveValue FloatToPrimitiveValue(::System::Single value)
		{
			return ((::UnityEngine::InputSystem::Utilities::PrimitiveValue(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_FLOATTOPRIMITIVEVALUE_OFFSET))(this, value);
		}

		::System::Double ReadDouble(::PVOID statePtr)
		{
			return ((::System::Double(*)(::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_READDOUBLE_OFFSET))(this, statePtr);
		}

		::System::Void WriteDouble(::PVOID statePtr, ::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_WRITEDOUBLE_OFFSET))(this, statePtr, value);
		}

		::System::Void Write(::PVOID statePtr, ::UnityEngine::InputSystem::Utilities::PrimitiveValue value)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::UnityEngine::InputSystem::Utilities::PrimitiveValue))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_WRITE_OFFSET))(this, statePtr, value);
		}

		::System::Void CopyToFrom(::PVOID toStatePtr, ::PVOID fromStatePtr)
		{
			return ((::System::Void(*)(::PVOID, ::PVOID, ::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_INPUTSYSTEM_LOWLEVEL_INPUTSTATEBLOCK_COPYTOFROM_OFFSET))(this, toStatePtr, fromStatePtr);
		}
	};
}
