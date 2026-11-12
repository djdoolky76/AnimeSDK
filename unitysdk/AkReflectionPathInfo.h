#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class AkAcousticSurface;
class AkReflectionPathInfo;

#define AKREFLECTIONPATHINFO_CLONE_OFFSET UNITYSDK_OFFSET(0x20866150)
#define AKREFLECTIONPATHINFO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20866270)
#define AKREFLECTIONPATHINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x20865210)
#define AKREFLECTIONPATHINFO_DISPOSE_1_OFFSET UNITYSDK_OFFSET(0x208654B0)
#define AKREFLECTIONPATHINFO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x208652D0)
#define AKREFLECTIONPATHINFO_FINALIZE_OFFSET UNITYSDK_OFFSET(0x208653E0)
#define AKREFLECTIONPATHINFO_GETACOUSTICSURFACE_OFFSET UNITYSDK_OFFSET(0x20865F90)
#define AKREFLECTIONPATHINFO_GETCPTR_OFFSET UNITYSDK_OFFSET(0x20865220)
#define AKREFLECTIONPATHINFO_GETDIFFRACTION_OFFSET UNITYSDK_OFFSET(0x20866090)
#define AKREFLECTIONPATHINFO_GETPATHPOINT_OFFSET UNITYSDK_OFFSET(0x20865EB0)
#define AKREFLECTIONPATHINFO_GETSIZEOF_OFFSET UNITYSDK_OFFSET(0x20865E00)
#define AKREFLECTIONPATHINFO_GET_IMAGESOURCE_OFFSET UNITYSDK_OFFSET(0x20865770)
#define AKREFLECTIONPATHINFO_GET_ISOCCLUDED_OFFSET UNITYSDK_OFFSET(0x20865D50)
#define AKREFLECTIONPATHINFO_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0x20865BE0)
#define AKREFLECTIONPATHINFO_GET_NUMPATHPOINTS_OFFSET UNITYSDK_OFFSET(0x20865900)
#define AKREFLECTIONPATHINFO_GET_NUMREFLECTIONS_OFFSET UNITYSDK_OFFSET(0x20865A70)
#define AKREFLECTIONPATHINFO_SETCPTR_OFFSET UNITYSDK_OFFSET(0x20865270)
#define AKREFLECTIONPATHINFO_SET_IMAGESOURCE_OFFSET UNITYSDK_OFFSET(0x20865680)
#define AKREFLECTIONPATHINFO_SET_ISOCCLUDED_OFFSET UNITYSDK_OFFSET(0x20865C90)
#define AKREFLECTIONPATHINFO_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0x20865B20)
#define AKREFLECTIONPATHINFO_SET_NUMPATHPOINTS_OFFSET UNITYSDK_OFFSET(0x20865840)
#define AKREFLECTIONPATHINFO_SET_NUMREFLECTIONS_OFFSET UNITYSDK_OFFSET(0x208659B0)

inline static constexpr unsigned int AkReflectionPathInfo_TypeDefinitionIndex = 45857;

	class AkReflectionPathInfo : public ::System::Object
	{
	public:
		::System::Boolean swigCMemOwn; // 0x10
		::System::Byte _padding0[0x7];
		::System::IntPtr swigCPtr; // 0x18
		::System::Void _ctor(::System::IntPtr a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFO_CTOR_1_OFFSET))(this);
		}

		static ::System::IntPtr getCPtr(::AkReflectionPathInfo* a1)
		{
			return ((::System::IntPtr(*)(::AkReflectionPathInfo*))((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFO_GETCPTR_OFFSET))(a1);
		}

		::System::Void setCPtr(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFO_SETCPTR_OFFSET))(this, a1);
		}

		::System::Void Finalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFO_FINALIZE_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFO_DISPOSE_OFFSET))(this);
		}

		::System::Void Dispose_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFO_DISPOSE_1_OFFSET))(this, a1);
		}

		::System::Void set_imageSource(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFO_SET_IMAGESOURCE_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_imageSource()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFO_GET_IMAGESOURCE_OFFSET))(this);
		}

		::System::Void set_numPathPoints(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFO_SET_NUMPATHPOINTS_OFFSET))(this, a1);
		}

		::System::UInt32 get_numPathPoints()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFO_GET_NUMPATHPOINTS_OFFSET))(this);
		}

		::System::Void set_numReflections(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFO_SET_NUMREFLECTIONS_OFFSET))(this, a1);
		}

		::System::UInt32 get_numReflections()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFO_GET_NUMREFLECTIONS_OFFSET))(this);
		}

		::System::Void set_level(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFO_SET_LEVEL_OFFSET))(this, a1);
		}

		::System::Single get_level()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFO_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_isOccluded(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFO_SET_ISOCCLUDED_OFFSET))(this, a1);
		}

		::System::Boolean get_isOccluded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFO_GET_ISOCCLUDED_OFFSET))(this);
		}

		static ::System::Int32 GetSizeOf()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFO_GETSIZEOF_OFFSET))();
		}

		::UnityEngine::Vector3 GetPathPoint(::System::UInt32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFO_GETPATHPOINT_OFFSET))(this, a1);
		}

		::AkAcousticSurface* GetAcousticSurface(::System::UInt32 a1)
		{
			return ((::AkAcousticSurface*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFO_GETACOUSTICSURFACE_OFFSET))(this, a1);
		}

		::System::Single GetDiffraction(::System::UInt32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFO_GETDIFFRACTION_OFFSET))(this, a1);
		}

		::System::Void Clone(::AkReflectionPathInfo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AkReflectionPathInfo*))((::PBYTE)hIl2Cpp + AKREFLECTIONPATHINFO_CLONE_OFFSET))(this, a1);
		}

	};
