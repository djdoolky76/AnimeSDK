#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace HoudiniEngineUnity { class HEU_GeneratedOutput; }
namespace System { class String; }

#define A0E056D42353C1E5_BDE04C5F1A876A75_OFFSET UNITYSDK_OFFSET(0x3887360)
#define A0E056D42353C1E5__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A0E056D42353C1E5_TypeDefinitionIndex = 18120;

class A0E056D42353C1E5 : public ::System::Object
{
public:
	::System::Int32 A6769D92F5350E00; // 0x10
	::System::Byte _padding0[0x4];
	::System::String* A1AD49ABC0442489; // 0x18
	::System::Boolean E9BFCB872494673E; // 0x20
	::System::Boolean E089CDDF62D97E04; // 0x21
	::System::Byte _padding1[0x6];
	::HoudiniEngineUnity::HEU_GeneratedOutput* B41BA6CFC13CD05C; // 0x28

	::System::Void BDE04C5F1A876A75(::System::Int32 F5AEFA05C9F71B82, ::System::String* F79B4D487F303AB2, ::System::Boolean FB4C0F9A3D9FD9C1, ::System::Boolean B45B458FAA96614A)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + A0E056D42353C1E5_BDE04C5F1A876A75_OFFSET))(this, F5AEFA05C9F71B82, F79B4D487F303AB2, FB4C0F9A3D9FD9C1, B45B458FAA96614A);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A0E056D42353C1E5__CTOR_OFFSET))(this);
	}
};
