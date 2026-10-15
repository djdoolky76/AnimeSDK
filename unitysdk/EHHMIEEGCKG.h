#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MIKENGEIPMG.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPGTools/Octree/Generation/OctreeNodeNativeData.h"
class FCCJBBDBHCA;
namespace System { class String; }
namespace System::IO { class BinaryReader; }
namespace System::IO { class MemoryStream; }

#define EHHMIEEGCKG_CTOR_OFFSET UNITYSDK_OFFSET(0x154A78F0)
#define EHHMIEEGCKG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x154A80B0)
#define EHHMIEEGCKG_GET_FILEPATH_OFFSET UNITYSDK_OFFSET(0x154A8760)
#define EHHMIEEGCKG_HKEPJLDBGIG_OFFSET UNITYSDK_OFFSET(0x154A8270)
#define EHHMIEEGCKG_JPGPHAJDOGN_OFFSET UNITYSDK_OFFSET(0x154A79E0)
#define EHHMIEEGCKG_LAFEOPLPDIN_OFFSET UNITYSDK_OFFSET(0x154A8660)
#define EHHMIEEGCKG_OHCJOIANPFG_OFFSET UNITYSDK_OFFSET(0x154A78A0)

inline static constexpr unsigned int EHHMIEEGCKG_TypeDefinitionIndex = 48881;

	class EHHMIEEGCKG : public ::System::Object
	{
	public:
		::FCCJBBDBHCA* IDHKPDHIAKE; // 0x10
		::System::IO::MemoryStream* IPMHANHEPME; // 0x18
		::System::String* _FilePath_k__BackingField; // 0x20
		::System::IO::BinaryReader* KNOIGMKBPBE; // 0x28
		::Il2CppArray<::System::Byte>* PMIBLDJPBCB; // 0x30
		::System::Int32 CLNKKOFGAAA; // 0x38
		::System::Int32 ILCAMABKPNI; // 0x3C
		::MIKENGEIPMG GPHIHDNBMOM; // 0x40
		// static const ::System::Object MHMEHGOKMJG; // 0x0
		::System::Void _ctor(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EHHMIEEGCKG_CTOR_OFFSET))(this, a1);
		}

		static ::System::String* OHCJOIANPFG(::System::String* a1, ::Il2CppArray<::RPGTools::Octree::Generation::OctreeNodeNativeData>* a2)
		{
			return ((::System::String*(*)(::System::String*, ::Il2CppArray<::RPGTools::Octree::Generation::OctreeNodeNativeData>*))((::PBYTE)hIl2Cpp + EHHMIEEGCKG_OHCJOIANPFG_OFFSET))(a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHHMIEEGCKG_DISPOSE_OFFSET))(this);
		}

		::System::Boolean HKEPJLDBGIG(::RPGTools::Octree::Generation::OctreeNodeNativeData a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPGTools::Octree::Generation::OctreeNodeNativeData))((::PBYTE)hIl2Cpp + EHHMIEEGCKG_HKEPJLDBGIG_OFFSET))(this, a1);
		}

		::System::Void JPGPHAJDOGN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHHMIEEGCKG_JPGPHAJDOGN_OFFSET))(this);
		}

		::System::Boolean LAFEOPLPDIN(::MIKENGEIPMG a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MIKENGEIPMG))((::PBYTE)hIl2Cpp + EHHMIEEGCKG_LAFEOPLPDIN_OFFSET))(this, a1);
		}

		::System::String* get_FilePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EHHMIEEGCKG_GET_FILEPATH_OFFSET))(this);
		}

	};
