#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Timeline { class ColorRecorderUnit; }
namespace MoleMole::Timeline { class FloatRecorderUnit; }
namespace MoleMole::Timeline { class TextureRecorderUnit; }
namespace MoleMole::Timeline { class Vector4RecorderUnit; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO___C_AKDJBJMBGEC_OFFSET UNITYSDK_OFFSET(0x1C0D44B0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO___C_DJBLONGBJBH_OFFSET UNITYSDK_OFFSET(0x1C0D44D0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO___C_DOLJFPLANDN_OFFSET UNITYSDK_OFFSET(0x1C0D4490)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO___C_JLBLACDDBJG_OFFSET UNITYSDK_OFFSET(0x1C0D44F0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO___C_KAJPAJPHBLE_OFFSET UNITYSDK_OFFSET(0x1C0D4470)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO___C_KBLFGJPCLDC_OFFSET UNITYSDK_OFFSET(0x1C0D4450)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1C0D4400)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0D4440)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int RuntimeMaterialInfo___c_TypeDefinitionIndex = 65824;

	class RuntimeMaterialInfo___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::MoleMole::Timeline::TextureRecorderUnit*, ::System::Int32>** StaticGet___9__35_1()
		{
			return (::System::Func_2<::MoleMole::Timeline::TextureRecorderUnit*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RuntimeMaterialInfo___c_TypeDefinitionIndex)->GetStaticField(0x3BF00);
		}
		static ::System::Func_2<::MoleMole::Timeline::FloatRecorderUnit*, ::System::String*>** StaticGet___9__41_0()
		{
			return (::System::Func_2<::MoleMole::Timeline::FloatRecorderUnit*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RuntimeMaterialInfo___c_TypeDefinitionIndex)->GetStaticField(0x3BF08);
		}
		static ::System::Func_2<::MoleMole::Timeline::FloatRecorderUnit*, ::System::Int32>** StaticGet___9__35_0()
		{
			return (::System::Func_2<::MoleMole::Timeline::FloatRecorderUnit*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RuntimeMaterialInfo___c_TypeDefinitionIndex)->GetStaticField(0x3BF10);
		}
		static ::System::Func_2<::MoleMole::Timeline::FloatRecorderUnit*, ::System::Single>** StaticGet___9__41_1()
		{
			return (::System::Func_2<::MoleMole::Timeline::FloatRecorderUnit*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(RuntimeMaterialInfo___c_TypeDefinitionIndex)->GetStaticField(0x3BF18);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(RuntimeMaterialInfo___c_TypeDefinitionIndex)->GetStaticField(0x3BF20);
		}
		static ::System::Func_2<::MoleMole::Timeline::Vector4RecorderUnit*, ::System::Int32>** StaticGet___9__35_3()
		{
			return (::System::Func_2<::MoleMole::Timeline::Vector4RecorderUnit*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RuntimeMaterialInfo___c_TypeDefinitionIndex)->GetStaticField(0x3BF28);
		}
		static ::System::Func_2<::MoleMole::Timeline::ColorRecorderUnit*, ::System::Int32>** StaticGet___9__35_2()
		{
			return (::System::Func_2<::MoleMole::Timeline::ColorRecorderUnit*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RuntimeMaterialInfo___c_TypeDefinitionIndex)->GetStaticField(0x3BF30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO___C__CTOR_OFFSET))(this);
		}

		::System::Int32 KBLFGJPCLDC(::MoleMole::Timeline::FloatRecorderUnit* DDHBIKHJACM)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::Timeline::FloatRecorderUnit*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO___C_KBLFGJPCLDC_OFFSET))(this, DDHBIKHJACM);
		}

		::System::String* KAJPAJPHBLE(::MoleMole::Timeline::FloatRecorderUnit* DFMKILICPFB)
		{
			return ((::System::String*(*)(::PVOID, ::MoleMole::Timeline::FloatRecorderUnit*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO___C_KAJPAJPHBLE_OFFSET))(this, DFMKILICPFB);
		}

		::System::Single DOLJFPLANDN(::MoleMole::Timeline::FloatRecorderUnit* DFMKILICPFB)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::Timeline::FloatRecorderUnit*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO___C_DOLJFPLANDN_OFFSET))(this, DFMKILICPFB);
		}

		::System::Int32 AKDJBJMBGEC(::MoleMole::Timeline::ColorRecorderUnit* DDHBIKHJACM)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::Timeline::ColorRecorderUnit*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO___C_AKDJBJMBGEC_OFFSET))(this, DDHBIKHJACM);
		}

		::System::Int32 DJBLONGBJBH(::MoleMole::Timeline::TextureRecorderUnit* DDHBIKHJACM)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::Timeline::TextureRecorderUnit*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO___C_DJBLONGBJBH_OFFSET))(this, DDHBIKHJACM);
		}

		::System::Int32 JLBLACDDBJG(::MoleMole::Timeline::Vector4RecorderUnit* DDHBIKHJACM)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::Timeline::Vector4RecorderUnit*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO___C_JLBLACDDBJG_OFFSET))(this, DDHBIKHJACM);
		}
	};
}
