#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class AkDiffractionPathInfo;
class AkTransform;

#define AKDIFFRACTIONPATHINFO_CLONE_OFFSET UNITYSDK_OFFSET(0x2083D460)
#define AKDIFFRACTIONPATHINFO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x2083D580)
#define AKDIFFRACTIONPATHINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x2083C430)
#define AKDIFFRACTIONPATHINFO_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x2083C6D0)
#define AKDIFFRACTIONPATHINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x2083C4F0)
#define AKDIFFRACTIONPATHINFO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x2083C600)
#define AKDIFFRACTIONPATHINFO_GETANGLES_OFFSET UNITYSDK_OFFSET(0x2083D220)
#define AKDIFFRACTIONPATHINFO_GETCPTR_OFFSET UNITYSDK_OFFSET(0x2083C440)
#define AKDIFFRACTIONPATHINFO_GETNODES_OFFSET UNITYSDK_OFFSET(0x2083D140)
#define AKDIFFRACTIONPATHINFO_GETPORTALS_OFFSET UNITYSDK_OFFSET(0x2083D2E0)
#define AKDIFFRACTIONPATHINFO_GETROOMS_OFFSET UNITYSDK_OFFSET(0x2083D3A0)
#define AKDIFFRACTIONPATHINFO_GETSIZEOF_OFFSET UNITYSDK_OFFSET(0x2083D090)
#define AKDIFFRACTIONPATHINFO_GET_DIFFRACTION_OFFSET UNITYSDK_OFFSET(0x2083CD00)
#define AKDIFFRACTIONPATHINFO_GET_NODECOUNT_OFFSET UNITYSDK_OFFSET(0x2083CB90)
#define AKDIFFRACTIONPATHINFO_GET_OBSTRUCTIONVALUE_OFFSET UNITYSDK_OFFSET(0x2083CFE0)
#define AKDIFFRACTIONPATHINFO_GET_TOTLENGTH_OFFSET UNITYSDK_OFFSET(0x2083CE70)
#define AKDIFFRACTIONPATHINFO_GET_VIRTUALPOS_OFFSET UNITYSDK_OFFSET(0x2083C9C0)
#define AKDIFFRACTIONPATHINFO_SETCPTR_OFFSET UNITYSDK_OFFSET(0x2083C490)
#define AKDIFFRACTIONPATHINFO_SET_DIFFRACTION_OFFSET UNITYSDK_OFFSET(0x2083CC40)
#define AKDIFFRACTIONPATHINFO_SET_NODECOUNT_OFFSET UNITYSDK_OFFSET(0x2083CAD0)
#define AKDIFFRACTIONPATHINFO_SET_OBSTRUCTIONVALUE_OFFSET UNITYSDK_OFFSET(0x2083CF20)
#define AKDIFFRACTIONPATHINFO_SET_TOTLENGTH_OFFSET UNITYSDK_OFFSET(0x2083CDB0)
#define AKDIFFRACTIONPATHINFO_SET_VIRTUALPOS_OFFSET UNITYSDK_OFFSET(0x2083C8A0)

inline static constexpr unsigned int AkDiffractionPathInfo_TypeDefinitionIndex = 45810;

	class AkDiffractionPathInfo : public ::System::Object
	{
	public:
		::System::Boolean swigCMemOwn; // 0x10
		::System::Byte _padding0[0x7];
		::System::IntPtr swigCPtr; // 0x18
		// static const ::System::Object kMaxNodes; // 0x0
		::System::Void _ctor(::System::IntPtr a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFO_CTOR_1_OFFSET))(this);
		}

		static ::System::IntPtr getCPtr(::AkDiffractionPathInfo* a1)
		{
			return ((::System::IntPtr(*)(::AkDiffractionPathInfo*))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFO_GETCPTR_OFFSET))(a1);
		}

		::System::Void setCPtr(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFO_SETCPTR_OFFSET))(this, a1);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFO_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFO_DISPOSE_1_OFFSET))(this, a1);
		}

		::System::Void set_virtualPos(::AkTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AkTransform*))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFO_SET_VIRTUALPOS_OFFSET))(this, a1);
		}

		::AkTransform* get_virtualPos()
		{
			return ((::AkTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFO_GET_VIRTUALPOS_OFFSET))(this);
		}

		::System::Void set_nodeCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFO_SET_NODECOUNT_OFFSET))(this, a1);
		}

		::System::UInt32 get_nodeCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFO_GET_NODECOUNT_OFFSET))(this);
		}

		::System::Void set_diffraction(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFO_SET_DIFFRACTION_OFFSET))(this, a1);
		}

		::System::Single get_diffraction()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFO_GET_DIFFRACTION_OFFSET))(this);
		}

		::System::Void set_totLength(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFO_SET_TOTLENGTH_OFFSET))(this, a1);
		}

		::System::Single get_totLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFO_GET_TOTLENGTH_OFFSET))(this);
		}

		::System::Void set_obstructionValue(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFO_SET_OBSTRUCTIONVALUE_OFFSET))(this, a1);
		}

		::System::Single get_obstructionValue()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFO_GET_OBSTRUCTIONVALUE_OFFSET))(this);
		}

		static ::System::Int32 GetSizeOf()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFO_GETSIZEOF_OFFSET))();
		}

		::UnityEngine::Vector3 GetNodes(::System::UInt32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFO_GETNODES_OFFSET))(this, a1);
		}

		::System::Single GetAngles(::System::UInt32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFO_GETANGLES_OFFSET))(this, a1);
		}

		::System::UInt64 GetPortals(::System::UInt32 a1)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFO_GETPORTALS_OFFSET))(this, a1);
		}

		::System::UInt64 GetRooms(::System::UInt32 a1)
		{
			return ((::System::UInt64(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFO_GETROOMS_OFFSET))(this, a1);
		}

		::System::Void Clone(::AkDiffractionPathInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AkDiffractionPathInfo*))((::PBYTE)hIl2Cpp + AKDIFFRACTIONPATHINFO_CLONE_OFFSET))(this, a1);
		}

	};
