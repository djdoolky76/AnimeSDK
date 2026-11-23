#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MiHoYo::SDK::Watermark { class WatermarkRequest; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define E902F523BDBB967D_E20ECEA8A228EF34_OFFSET UNITYSDK_OFFSET(0x3925690)
#define E902F523BDBB967D_E49CD005EFD48D33_OFFSET UNITYSDK_OFFSET(0x3925550)
#define E902F523BDBB967D_F769E12B24014998_OFFSET UNITYSDK_OFFSET(0x39259A0)
#define E902F523BDBB967D__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E902F523BDBB967D_TypeDefinitionIndex = 12336;

class E902F523BDBB967D : public ::System::Object
{
public:
	static ::System::String** StaticGet_B0702575FE394B9C()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(E902F523BDBB967D_TypeDefinitionIndex)->GetStaticField(0x0);
	}

	static ::System::String* E49CD005EFD48D33()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + E902F523BDBB967D_E49CD005EFD48D33_OFFSET))();
	}

	static ::MiHoYo::SDK::Watermark::WatermarkRequest* E20ECEA8A228EF34(::System::Int32 F5EF7E29767E03BF, ::System::Int32 F0961C93719F7B0D)
	{
		return ((::MiHoYo::SDK::Watermark::WatermarkRequest*(*)(::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + E902F523BDBB967D_E20ECEA8A228EF34_OFFSET))(F5EF7E29767E03BF, F0961C93719F7B0D);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E902F523BDBB967D__CTOR_OFFSET))(this);
	}

	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* F769E12B24014998()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)())((::PBYTE)hIl2Cpp + E902F523BDBB967D_F769E12B24014998_OFFSET))();
	}
};
